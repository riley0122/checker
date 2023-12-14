#include "user.h"
#include <cstring>
#include <iostream>
#include "userData.h"

namespace auth
{
    user::user(userData::userData *data)
    {
        if (memcmp(data, &userData::_EmptyUser, sizeof(userData::userData)) == 0)
        {
            std::cout << "Empty user provided";
        }
        else
        {
            std::cout << "Not an empty user";
        }
    }
} // namespace auth
