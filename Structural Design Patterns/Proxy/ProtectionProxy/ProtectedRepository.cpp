#include "ProtectedRepository.h"
#include <iostream>

void ProtectedRepository::CreateFile(const std::string& fileName, std::string Role)
{
	determineAuthorizationLevel(Role);

	if (isAuthorizedReadWriteDeleteUpdate)
	{
		m_pRepository->CreateFile(fileName, Role);
	}

	else
	{
		std::cout << "You are not authorized to Create/write files.\n";
	}

	// reset authorization levels
	isAuthorizedReadWriteDeleteUpdate = false;
	isAuthorziedRead = false;
}

void ProtectedRepository::DeleteFile(const std::string& fileName, std::string Role)
{
	determineAuthorizationLevel(Role);

	if (isAuthorizedReadWriteDeleteUpdate)
	{
		m_pRepository->DeleteFile(fileName, Role);
	}

	else
	{
		std::cout << "You are not authorized to delete files.\n";
	}

	// reset authorization levels
	isAuthorizedReadWriteDeleteUpdate = false;
	isAuthorziedRead = false;
}

void ProtectedRepository::UpdateFile(const std::string& fileName, std::string Role)
{
	determineAuthorizationLevel(Role);

	if (isAuthorizedReadWriteDeleteUpdate)
	{
		m_pRepository->UpdateFile(fileName, Role);
	}

	else
	{
		std::cout << "You are not authorized to update files.\n";
	}

	// reset authorization levels
	isAuthorizedReadWriteDeleteUpdate = false;
	isAuthorziedRead = false;
}

void ProtectedRepository::ViewFile(const std::string& fileName, std::string Role)
{
	determineAuthorizationLevel(Role);

	if (isAuthorziedRead || isAuthorizedReadWriteDeleteUpdate)
	{
		m_pRepository->ViewFile(fileName, Role);
	}

	else
	{
		std::cout << "You are not authorized to view files.\n";
	}

	// reset authorization levels
	isAuthorizedReadWriteDeleteUpdate = false;
	isAuthorziedRead = false;
}

void ProtectedRepository::determineAuthorizationLevel(std::string role)
{
	for (auto& empRole : AllowedReadWriteDeleteAccess)
	{
		if (empRole == role)
		{
			isAuthorizedReadWriteDeleteUpdate = true;
			return;
		}
	}

	for (auto& empRole : AllowedReadWriteDeleteAccess)
	{
		if (empRole == role)
		{
			isAuthorziedRead= true;
			return;
		}
	}
}

void ProtectedRepository::displayFileNames() const
{
	m_pRepository->displayFileNames();
}
