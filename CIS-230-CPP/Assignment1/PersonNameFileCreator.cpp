#include "PersonNameFileCreator.h"

PersonNameFileCreator::~PersonNameFileCreator() 
{
	fil_data.close();
}

PersonNameFileCreator::PersonNameFileCreator(string _filename) 
{
	string filename = _filename;

	fil_data.open(filename, ios::out);
}

void PersonNameFileCreator::write_to_file(const PersonName & param_obj) 
{
	fil_data << param_obj.getDirectoryName() << endl;
}