#include "Employee.h"

// The Implementation class
//**********************************************************************
class Employee::EmployeeImpl 
{
	std::string m_Name{};
	int m_BasicSalary{};
	int m_HRA{};
	int m_LTA{};
	int m_CA{};
	int m_PA{20};
	

public:

	EmployeeImpl(const std::string& m_name, int m_basicSalary)
		:m_Name{ m_name }, m_BasicSalary{ m_basicSalary }, m_HRA{ 50 }, m_LTA{ 10 }, m_CA{ 5 }
	{	}

	int GetTotalSalary() const
	{
		return m_BasicSalary + m_HRA + m_LTA + m_CA;
	}
	int ComputeTaxLiability() const
	{
		return m_BasicSalary * .2f;
	}
	const std::string GetName() const
	{
		return m_Name;
	}
};
//***************************************************************************

Employee::Employee(const std::string& name, int basicSalary)
{
	m_pEmpImpl = new EmployeeImpl{ name, basicSalary };
}

int Employee::GetTotalSalary() const
{
    return m_pEmpImpl->GetTotalSalary();
}

int Employee::ComputeTaxLiability() const
{
    return m_pEmpImpl->ComputeTaxLiability();
}

const std::string Employee::GetName() const
{
    return  m_pEmpImpl->GetName();
}

Employee::~Employee()
{
	delete m_pEmpImpl;
}
