#include <iostream>
#include <fstream>

inline bool file_exists(const std::string &name)
{
    std::ifstream f(name.c_str());
    return f.good();
}

int main()
{
    if (file_exists(".auth"))
    {
        std::cout << "Attempting file authentication..." << std::endl;
    }
}