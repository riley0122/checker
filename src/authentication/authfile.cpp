#include "authfile.h"
#include <iostream>

using namespace auth;

bool authfile::authenticate()
{
    std::cout << "Authenticating as " << this->USER << std::endl;
    return false;
}

authfile::authfile(std::string filename)
{
    std::cout << "opening auth file " << filename << std::endl;
}