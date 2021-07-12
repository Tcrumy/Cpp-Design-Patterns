#pragma once
#include "Storage.h"
#include <memory>
#include "Repository.h"

class ProtectedRepository :
    public Storage
{
private:

	std::unique_ptr<Repository> m_pRepository = std::make_unique<Repository>();
	bool isAuthorziedRead{ false };
	bool isAuthorizedReadWriteDeleteUpdate{ false };
	void determineAuthorizationLevel(std::string role);

public:
	void CreateFile(const std::string& fileName, std::string Role) override;
	void DeleteFile(const std::string& fileName, std::string Role) override;
	void UpdateFile(const std::string& fileName, std::string Role) override;
	void ViewFile(const std::string& fileName, std::string Role) override;
	void displayFileNames() const override;
};

