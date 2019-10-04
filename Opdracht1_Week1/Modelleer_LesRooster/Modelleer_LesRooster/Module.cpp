#include "pch.h"
#include "Module.h"


Module::Module(std::string _moduleName, int _ect)
{
	//Constructor

	moduleName = _moduleName;
	ect = _ect;
}


Module::~Module()
{
	//Destructor
}

int Module::getECT()
{
	return ect;
}

std::string Module::getModuleName()
{
	return moduleName;
}