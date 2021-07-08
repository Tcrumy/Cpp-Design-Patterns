#include "Employee.h"

Employee::Employee(const std::string& name, const std::string& role) : m_Name{ name }, m_Role{role}
{
}

std::string Employee::getInfo() const
{
	std::ostringstream out;
	out << '[' << m_Role << ']' << m_Name << ' ';

	return out.str();
}

const std::string& Employee::getName() const
{
	return m_Name;
}

const std::string& Employee::getRole() const
{
	return m_Role;
}
