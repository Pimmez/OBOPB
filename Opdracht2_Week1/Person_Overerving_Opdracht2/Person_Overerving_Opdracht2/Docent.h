#pragma once
#include "Person.h"
#include <string>

class Docent : public Person
{
public:
	Docent(const std::string _docentName, int _docentAge, int _salary);
	~Docent();

	int getSalary();

private:
	int salary;
};