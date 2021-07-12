#pragma once
#include <string>
#include <vector>
#include <filesystem>
#include <sys/stat.h>

namespace fs = std::filesystem;

class Storage
{
private:
	void addFilesToVector(const fs::path& p);

protected:
	std::vector<std::string> fileNames;
	std::vector<std::string> AllowedReadWriteDeleteAccess{"Manager","Engineer"};
	std::vector<std::string> AllowedReadAccess{ "Manager","Engineer", "Others" };

public:
	Storage();
	virtual void CreateFile(const std::string& fileName, std::string Role) = 0; 
	virtual void DeleteFile(const std::string& fileName, std::string Role) = 0;
	virtual void UpdateFile(const std::string& fileName, std::string Role) = 0;
	virtual void ViewFile(const std::string& fileName, std::string Role) = 0;
	virtual void displayFileNames() const = 0;
	virtual ~Storage() = default;
};

