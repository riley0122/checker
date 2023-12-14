#include "authfile.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace auth;

bool authfile::authenticate()
{
    std::cout << "Authenticating as " << this->USER << std::endl;
    return false;
}

authfile::authfile(std::string filename)
{
    std::cout << "opening auth file " << filename << std::endl;
    std::ifstream infile(filename);

    std::string line;
    while (std::getline(infile, line))
    {
        std::istringstream iss(line);
        std::cout << line << std::endl;
    }
}
