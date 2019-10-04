#include "pch.h"
#include "Student.h"

Student::Student(std::string _studentName, int _studentNummer)
{
	studentName = _studentName;
	studentNummer = _studentNummer;
}


Student::~Student()
{
	//Destructor
}

std::string Student::getStudentName()
{
	return studentName;
}

int Student::getStudentNummer()
{
	return studentNummer;
}