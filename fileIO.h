#ifndef FILEIO_H
#define FILEIO_H
#include "Student.h"
#include <fstream>
#include <iostream>

class fileIO {
public:
	static std::vector<Student> loadStudents();
	static void saveStudents(std::vector<Student>);
	static void clearDB();
	static std::vector<std::string> split(std::string, char);
private:
	static Student dbEntryToStudent(std::string);
};
#endif
