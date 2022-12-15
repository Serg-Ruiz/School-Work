#include <iostream>
#include <fstream>
#include <string>
#include <vector>


using namespace std;

void readFileCourses();
void eraseEveryOdd(std::vector<string>& arr);
void eraseEveryEven(vector<string>& arr); 
void readFileStudents();
void readFileCourseStudents();
void to_String(vector<string>& arr, vector<string>& arr1);
int mainMenu();
void displayListOfClasses(vector<string>& courseID, vector<string>& courseName, vector<string>& enrolledID);

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

		cout << "\tCIS230 - Term Project\n1. Print course.text data struccture\n2. Print student.text data struccture\n3. Print courses_.text data struccture\n99. Quit\n";
		cin >> userchoice;
	}
}

void readFileCourses()
{
	ifstream file;
	file.open("courses.txt");
	if (!file.is_open()) return;

	vector<string> courseID;
	vector<string> courseName;

	string word;

	while (!file.eof())
	{
		file >> word;
		courseID.push_back(word);
	}

	for (int i = 0; i < courseID.size(); i++)
	{
		courseName.push_back(courseID[i]);
	}

	courseID.pop_back();
	courseName.pop_back();

	eraseEveryEven(courseID);
	eraseEveryOdd(courseName);

	file.close();

	ifstream file2;
	file.open("courses_students.txt");
	if (!file.is_open()) return;

	vector<string> courseID2;
	vector<string> StudentID;

	string word2;

	while (!file.eof())
	{
		file >> word2;
		courseID2.push_back(word2);
	}

	for (int i = 0; i < courseID2.size(); i++)
	{
		StudentID.push_back(courseID2[i]);
	}

	courseID2.pop_back();
	StudentID.pop_back();

	eraseEveryEven(courseID2);
	eraseEveryOdd(StudentID);

    displayListOfClasses(courseID, courseName, courseID2);

	file.close();
}

void eraseEveryOdd(vector<string>& arr)
{
	if ((arr.size() % 2) > 0)
		arr.pop_back();

	auto size = arr.size() / 2;

	for (size_t i = 0; i < size; ++i)
		arr.erase(arr.begin() + i);
}

void eraseEveryEven(vector<string>& arr)
{
	if ((arr.size() % 2) == 0)
		arr.pop_back();

	auto size = (arr.size() / 2) + 1;

	for (size_t i = 1; i < size; ++i)
		arr.erase(arr.begin() + i);
}

void readFileStudents() 
{
	ifstream file;
	file.open("students.txt");
	if (!file.is_open()) return;

	vector<string> vect1;
	vector<string> vect2;

	string word;

	while (!file.eof())
	{
		file >> word;
		vect1.push_back(word);
	}

	for (int i = 0; i < vect1.size(); i++)
	{
		vect2.push_back(vect1[i]);
	}

	vect1.pop_back();
	vect2.pop_back();

	eraseEveryEven(vect1);
	eraseEveryOdd(vect2);

	to_String(vect1, vect2);

	file.close();
}

void readFileCourseStudents() 
{
	ifstream file;
	file.open("courses_students.txt");
	if (!file.is_open()) return;

	vector<string> vect1;
	vector<string> vect2;

	string word;

	while (!file.eof())
	{
		file >> word;
		vect1.push_back(word);
	}

	for (int i = 0; i < vect1.size(); i++)
	{
		vect2.push_back(vect1[i]);
	}

	vect1.pop_back();
	vect2.pop_back();

	eraseEveryEven(vect1);
	eraseEveryOdd(vect2);

	to_String(vect1,vect2);
 
	file.close();
}

void to_String(vector<string>& arr, vector<string>& arr1)
{
	for (int i = 0; i < arr.size(); i++) 
	{
		cout << arr[i] << "\t" << arr1[i] << endl;
	}
	return;
}

void displayListOfClasses(vector<string>& courseID, vector<string>& courseName, vector<string>& enrolledID)
{
	int enrolled =0;
	int waitlist =0;
	int pythonEnrolled = 0;
	int pythonWaitlisted = 0;
	int vbnetEnrolled = 0;
	int vbWaitlisted = 0;
	int cppEnrolled = 0;
	int cppWaitListed = 0;
	int javaEnrolled = 0;
	int javaWaitlisted = 0;
	int gameMakerEnrolled = 0;
	int gameMakerWaitlisted = 0;


	for (int i = 0; enrolledID.size(); i++) 
	{
		if (courseID[0] == enrolledID[i]) 
		{
			if (pythonEnrolled < 5) 
			{
				pythonEnrolled++;
			}
			else if (pythonEnrolled == 5) 
			{
				pythonWaitlisted++;
			}
		}
		else if (courseID[1] == enrolledID[i])
		{
			if (vbnetEnrolled < 5)
			{
				vbnetEnrolled++;
			}
			else if (vbnetEnrolled == 5)
			{
				vbWaitlisted++;
			}
		}
		else if (courseID[2] == enrolledID[i])
		{
			if (cppEnrolled < 5)
			{
				cppEnrolled++;
			}
			else if (cppEnrolled == 5)
			{
				cppWaitListed++;
			}
		}
		else if (courseID[3] == enrolledID[i])
		{
			if (javaEnrolled < 5)
			{
				javaEnrolled++;
			}
			else if (pythonEnrolled == 5)
			{
				javaWaitlisted++;
			}
		}
		else if (courseID[4] == enrolledID[i])
		{
			if (gameMakerEnrolled < 5)
			{
				gameMakerEnrolled++;
			}
			else if (gameMakerEnrolled = 5)
			{
				gameMakerWaitlisted++;
			}
		}
	}

	cout << "   Course ID\tCourse Name\tEnrolled\tWaitlisted\n";

	return;
}