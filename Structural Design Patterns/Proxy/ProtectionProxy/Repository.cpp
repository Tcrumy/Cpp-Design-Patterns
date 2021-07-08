#include "Repository.h"
#include <iostream>
#include <fstream>
#include <filesystem>

void Repository::CreateFile(const std::string& fileName, std::string Role)
{
	std::ofstream outFile{ "C:\\Users\\Travis\\Desktop\\C++\\Structural Design Patterns\\Proxy\\ProtectionProxy\\Files\\" + fileName };

	char sentinel;
	std::cout << "Would you like to write to the file?(y\\n): ";
	std::cin >> sentinel;

	std::cin.ignore();

	if (sentinel == 'Y' || sentinel == 'y')
	{
		std::string addTofile{};
		std::cout << "Enter File Data: ";
		std::getline(std::cin,addTofile);
		outFile << addTofile << "\n";
	}

	outFile.close();

	fileNames.push_back(fileName);
	std::cout << fileName << " has been created.\n";


}

void Repository::DeleteFile(const std::string& fileName, std::string Role)
{

	auto path = fs::current_path();
	std::ifstream test;
	test.open(path.string() + fileName);

	if (test.is_open())
	{
		test.close();
		bool removed = std::filesystem::remove(path.string() + fileName);
		std::cout << "Delete occured\n";
		std::cout << fileName << " has been deleted.\n";
		return;
	}

	std::cout << fileName << " was not found\n";
}

void Repository::UpdateFile(const std::string& fileName, std::string Role)
{
	std::string addData{};

	auto path = fs::current_path();

	for (auto& file : fileNames)
	{
		if (file == fileName)
		{
			std::ofstream outFile{ path.string() + fileName, std::ios_base::app };
			std::cout << "Enter additional data: ";
			std::getline(std::cin, addData);
			outFile << addData + "\n";
			std::cout << fileName << " Succesfully Updated\n";
			outFile.close();
			return;
		}
	}

	std::cout << fileName << " not found\n";

}

void Repository::ViewFile(const std::string& fileName, std::string Role)
{
	auto path = fs::current_path();

	std::ifstream inFile;
	inFile.open(path.string() + fileName);

	std::string line{};

	if (inFile.is_open())
	{
		while (std::getline(inFile, line))
		{
			std::cout << line << "\n";
		}

		return;
	}

	std::cout << fileName << " could not be found\n";

}

void Repository::displayFileNames() const
{
	for (auto& file : fileNames)
	{
		std::cout << file << "\n";
	}
}
