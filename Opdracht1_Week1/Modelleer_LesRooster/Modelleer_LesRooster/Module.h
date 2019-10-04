#pragma once
#include <string>

class Module
{
public:
	Module(std::string _moduleName, int _ect);
	~Module();
	std::string getModuleName();
	int getECT();

private:
	std::string moduleName;
	int ect;
};

