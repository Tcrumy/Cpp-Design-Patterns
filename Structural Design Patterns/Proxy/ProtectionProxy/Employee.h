#pragma once
#include <string>
#include <sstream>


class Employee
{
	std::string m_Name;
	std::string m_Role;

public:
	Employee(const std::string& name, const std::string& role);

	std::string getInfo() const;
	const std::string& getName() const;
	const std::string& getRole()const;
};

