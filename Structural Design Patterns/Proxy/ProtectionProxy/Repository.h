#pragma once
#include "Storage.h"
class Repository :
	public Storage
{

public:
	void CreateFile(const std::string& fileName, std::string Role) override;
	void DeleteFile(const std::string& fileName, std::string Role) override;
	void UpdateFile(const std::string& fileName, std::string Role) override;
	void ViewFile(const std::string& fileName, std::string Role) override;
	void displayFileNames() const;
};
	

