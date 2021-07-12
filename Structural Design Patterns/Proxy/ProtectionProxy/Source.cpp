#include "Storage.h"
#include "Repository.h"
#include "Employee.h"
#include "ProtectedRepository.h"
#include <Memory>

int main()
{
	Employee emp1("Travis", "Engineer");
	Employee emp2("John", "Front Desk");

	auto S = std::make_unique<ProtectedRepository>();

	S->CreateFile("New.txt", emp1.getRole());
	S->displayFileNames();

	S->DeleteFile("New.txt", emp2.getRole());

	return 0;
}