#pragma once
#include "Person.h"
#include <string>

class Student : public Person
{
public:
	Student(const std::string _studentName, int _studentAge, int _studentNumber);
	~Student();

	int getStudentNumber();

private:
	int studentNumber;
};