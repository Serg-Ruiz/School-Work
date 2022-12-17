#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>


using namespace std;

void readFileCourses();
vector<string> eraseEveryOdd(vector<string>& arr);
vector<string> eraseEveryEven(vector<string>& arr);
void readFileCourseStudents();
void readFileStudents();
int mainMenu();
void displayListOfClasses(vector<string>& courseID, vector<string>& courseName, vector<string>& enrolledID);
void displayRosterOfClass(vector<string>& courseID, vector<string>& courseName, vector<string>& enrolledID, vector<string> studentEnrolledID, vector<string> studentID, vector<string> studentName);
void displayRosterOfSingleClass(vector<string>& courseID, vector<string>& courseName, vector<string>& enrolledID, vector<string> studentEnrolledID, vector<string> studentID, vector<string> studentName);
vector<string> createVectorCourseID();
vector<string> createVectorCourseName();
vector<string> createVectorEnrolledID();
vector<string> createVectorStudentsEnrolled();
vector <string> createVectorStudentID();
vector <string> createVectorStudentName();



int main()
{
	while (mainMenu() != 99)
	{
		mainMenu();
	}

	return 0;
}

int mainMenu()
{
	int userchoice = 0;

	while (userchoice != 1 || userchoice != 2 || userchoice != 3 || userchoice != 99)
	{
		if (userchoice == 1)
		{
			readFileCourses();
		}
		else if (userchoice == 2)
		{
			readFileStudents();
		}
		else if (userchoice == 3)
		{
			readFileCourseStudents();
		}
		else if (userchoice == 99)
		{
			return 99;
		}

		cout << "\tCIS230 - Term Project\n1. Display list of classes\n2. Display class roster for one class\n3. Display rosters of all classes\n99. Quit\n";
		cin >> userchoice;
	}
}

void readFileCourses()
{
	vector<string> courseID = createVectorCourseID();
	vector<string> courseName = createVectorCourseName();
	vector<string> enrolledID = createVectorEnrolledID();

	displayListOfClasses(courseID, courseName, enrolledID);
}

vector<string> eraseEveryOdd(vector<string>& arr)
{
	if ((arr.size() % 2) > 0)
		arr.pop_back();

	auto size = arr.size() / 2;

	for (size_t i = 0; i < size; ++i)
		arr.erase(arr.begin() + i);

	return arr;
}

vector<string> eraseEveryEven(vector<string>& arr)
{
	if ((arr.size() % 2) == 0)
		arr.pop_back();

	auto size = (arr.size() / 2) + 1;

	for (size_t i = 1; i < size; ++i)
		arr.erase(arr.begin() + i);

	return arr;
}

void readFileStudents()
{
	vector<string> enrolledID = createVectorEnrolledID();
	vector<string> studentEnrolledID = createVectorStudentsEnrolled();

	vector<string> courseID = createVectorCourseID();
	vector<string> courseName = createVectorCourseName();

	vector<string> studentID = createVectorStudentID();
	vector<string> studentName = createVectorStudentName();

	displayRosterOfSingleClass(courseID, courseName, enrolledID, studentEnrolledID, studentID, studentName);

	return;
}

void readFileCourseStudents()
{
	vector<string> enrolledID = createVectorEnrolledID();
	vector<string> studentEnrolledID = createVectorStudentsEnrolled();

	vector<string> courseID = createVectorCourseID();
	vector<string> courseName = createVectorCourseName();

	vector<string> studentID = createVectorStudentID();
	vector<string> studentName = createVectorStudentName();

	displayRosterOfClass(courseID, courseName, enrolledID, studentEnrolledID, studentID, studentName);

}

void displayListOfClasses(vector<string>& courseID, vector<string>& courseName, vector<string>& enrolledID)
{
	int numClass = 0;
	cout << "Course ID\tCourse Name\tEnrolled\tWaitlisted\n";
	cout << "----------------------------------------------------------\n";
	for (int i = 0; i < courseID.size(); i++)
	{
		numClass++;
		cout << numClass << ". " << courseID[i] << "\t" << left << setw(11) << courseName[i] << "\t";

		int enrolled = 0;
		int waitlisted = 0;

		enrolled = count(enrolledID.begin(), enrolledID.end(), courseID[i]);

		if (enrolled > 5)
		{
			waitlisted = enrolled - 5;
			enrolled = 5;
		}
		else
		{
			enrolled = enrolled;
			waitlisted = 0;
		}

		cout << enrolled << "\t\t" << waitlisted << endl;
	}
	cout << "Number of classes = " << numClass << endl;
	return;
}

void displayRosterOfClass(vector<string>& courseID, vector<string>& courseName, vector<string>& enrolledID, vector<string> studentEnrolledID, vector<string> studentID, vector<string> studentName)
{		
	for (int x = 0; x < courseID.size(); x++)
	{

		int enrolled = 0;
		int waitlisted = 0;

		enrolled = count(enrolledID.begin(), enrolledID.end(), courseID[x]);

		if (enrolled > 5)
		{
			waitlisted = enrolled - 5;
			enrolled = 5;
		}
		else
		{
			enrolled = enrolled;
			waitlisted = 0;
		}

		cout << "\n-----------------------------------------------------\n";
		cout << "Class : " << courseID[x] << " - " << courseName[x] << endl;
		cout << "Class Enrollment = " << enrolled << ":  ";
		
		for (int i = 0; i < enrolled + waitlisted; i++) 
		{
			auto place = find(studentID.begin(),studentID.end(), studentEnrolledID[0]);
			int location = place - studentID.begin();

			cout << studentName[location] << " ";

			if (i == 4)
			{
				cout << endl << "Wait list = " << waitlisted << " ";
			}
			studentEnrolledID.erase(studentEnrolledID.begin());
		}

	}
	cout << endl << endl;

}

void displayRosterOfSingleClass(vector<string>& courseID, vector<string>& courseName, vector<string>& enrolledID, vector<string> studentEnrolledID, vector<string> studentID, vector<string> studentName)
{
	string input;

	cout << "Enter ClassId to display : \n";
	cin >> input;

	auto place = find(courseID.begin(), courseID.end(), input);
	int location = place - courseID.begin();

	int enrolled = 0;
	int waitlisted = 0;

	enrolled = count(enrolledID.begin(), enrolledID.end(), courseID[location]);

	if (enrolled > 5)
	{
		waitlisted = enrolled - 5;
		enrolled = 5;
	}
	else
	{
		enrolled = enrolled;
		waitlisted = 0;
	}

	cout << "\nClass : " << courseID[location] << " - " << courseName[location];
	cout << "\nClass Enrollment = " << enrolled << endl;

	for (int i = 0; i < enrolled + waitlisted; i++)
	{
		int count = 1 + i;

		auto place1 = find(enrolledID.begin(), enrolledID.end(), input);
		int location1 = place1 - enrolledID.begin();

		string id = studentEnrolledID[location1];

		auto place2 = find(studentID.begin(), studentID.end(), id);
		int location2 = place2 - studentID.begin();

		cout << count << ". " << studentID[location2] << "\t" << studentName[location2] << endl;

		if (i == 4)
		{
			cout << endl << "Wait list = " << waitlisted << endl;
		}
		studentEnrolledID.erase(studentEnrolledID.begin());
	}
}

vector<string> createVectorCourseID()
{
	ifstream file;
	file.open("courses.txt");

	vector<string> courseID;

	string word;

	while (!file.eof())
	{
		file >> word;
		courseID.push_back(word);
	}

	courseID.pop_back();

	courseID = eraseEveryEven(courseID);

	file.close();

	return courseID;
}

vector<string> createVectorCourseName()
{
	ifstream file;
	file.open("courses.txt");

	vector<string> courseName;

	string word;

	while (!file.eof())
	{
		file >> word;
		courseName.push_back(word);
	}

	courseName.pop_back();

	courseName = eraseEveryOdd(courseName);

	file.close();

	return courseName;
}

vector<string> createVectorEnrolledID()
{
	ifstream file;
	file.open("courses_students.txt");

	vector<string> enrolledID;

	string word;

	while (!file.eof())
	{
		file >> word;
		enrolledID.push_back(word);
	}

	enrolledID.pop_back();

	enrolledID = eraseEveryEven(enrolledID);

	file.close();

	return enrolledID;
}

vector<string> createVectorStudentsEnrolled() 
{
	ifstream file;
	file.open("courses_students.txt");

	vector<string> studentsEnrolled;

	string word;

	while (!file.eof())
	{
		file >> word;
		studentsEnrolled.push_back(word);
	}

	studentsEnrolled.pop_back();

	studentsEnrolled = eraseEveryOdd(studentsEnrolled);

	file.close();

	return studentsEnrolled;

}

vector <string> createVectorStudentID()
{
	ifstream file;
	file.open("students.txt");

	vector<string> studentID;

	string word;

	while (!file.eof())
	{
		file >> word;
		studentID.push_back(word);
	}

	studentID.pop_back();

	studentID = eraseEveryEven(studentID);

	file.close();

	return studentID;
}

vector <string> createVectorStudentName()
{
	ifstream file;
	file.open("students.txt");

	vector<string> studentName;

	string word;

	while (!file.eof())
	{
		file >> word;
		studentName.push_back(word);
	}

	studentName.pop_back();

	studentName = eraseEveryOdd(studentName);

	file.close();

	return studentName;
}