#pragma once
#include <string>

class Student
{
public:
	Student(std::string _studentName, int _studentNummer);
	~Student();
	std::string getStudentName();
	int getStudentNummer();

private:
	std::string studentName;
	int studentNummer;
};