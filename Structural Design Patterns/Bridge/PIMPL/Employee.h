#pragma once
#include <string>

class Employee
{
	//std::string m_Name{};
	//int m_BasicSalary{};
	//int m_HRA{};
	//int m_LTA{};
	//int m_CA{};

	class EmployeeImpl;
	// The pointer to implementaion
	EmployeeImpl* m_pEmpImpl{};

public:

	Employee(const std::string& name, int basicSalary);

	int GetTotalSalary() const;
	int ComputeTaxLiability() const;
	const std::string GetName() const;
	~Employee();

};

