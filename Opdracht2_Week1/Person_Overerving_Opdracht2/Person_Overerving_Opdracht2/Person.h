#pragma once
#include <string>

class Person
{
public:
	Person();
	Person(const std::string _personName, int _personAge);
	~Person();

	int getAge();
	std::string getPersonName();

private:
	int personAge;
	std::string personName;
};