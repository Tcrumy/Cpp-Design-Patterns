#include "Storage.h"
namespace fs = std::filesystem;

Storage::Storage()
{
    for (auto it = fs::directory_iterator("Files"); it != fs::directory_iterator(); ++it)
    {
        addFilesToVector(*it);
    }
}

void Storage::addFilesToVector(const fs::path& p)
{
    if (p.string().substr(p.string().length() - 3, p.string().length()) == "txt")
    {
        fileNames.push_back(p.string().substr(6,p.string().length()));
    }
}
