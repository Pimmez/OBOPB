#include "pch.h"
#include "Student.h"


Student::Student(const std::string _studentName, int _studentAge, int _studentNumber) : Person(_studentName, _studentAge), studentNumber(_studentNumber) {}

Student::~Student()
{
	//Destructor
}

int Student::getStudentNumber()
{
	return studentNumber;
}