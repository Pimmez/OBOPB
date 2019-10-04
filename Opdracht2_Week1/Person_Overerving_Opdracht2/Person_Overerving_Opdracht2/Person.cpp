#include "pch.h"
#include "Person.h"


Person::Person()
{
	//Constructor
}

Person::Person(const std::string _personName, int _personAge) : personName(_personName), personAge(_personAge) {}

Person::~Person()
{
	//Destructor
}

int Person::getAge()
{
	return personAge;
}

std::string Person::getPersonName()
{
	return personName;
}