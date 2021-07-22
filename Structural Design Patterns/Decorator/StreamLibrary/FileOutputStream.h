#pragma once
#include "OutputStream.h"
#include <fstream>

// FileOutputStream represents a concrete/non-decorated component
// The OutputStream interface is inherited
class FileOutputStream : public OutputStream
{
    std::ofstream m_Writer{};

public:
    
    FileOutputStream();
    FileOutputStream(const std::string& fileName);
    ~FileOutputStream();
    void Write(const std::string& text) override;
    void Close() override;
};

