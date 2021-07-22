#pragma once
#include "InputStream.h"
#include <fstream>

// FileInputStream represents a concrete/non-decorated component
// The InputStream interface is inherited
class FileInputStream : public InputStream
{
    // Files will be read into m_Reader during construction if a file name is provided as argument
    std::ifstream m_Reader;

public:
    FileInputStream();
    FileInputStream(const std::string& fileName);
    ~FileInputStream();
    bool Read(std::string& text) override;
    void Close() override;
};

