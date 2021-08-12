#include "Employee.h"
#include <iostream>

int main()
{
	Employee emp{ "Travis", 1000 };
	std::cout << "Name: " << emp.GetName() << '\n';
	std::cout << "Total Salary: " << emp.GetTotalSalary() << '\n';
	std::cout << "Tax: " << emp.ComputeTaxLiability() << '\n';

	return 0;
}