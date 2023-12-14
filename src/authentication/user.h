#pragma once

#include <string>
#include "userData.h"

namespace auth
{
    class user
    {
    private:
        userData::userData data;

    public:
        user(userData::userData *data = &userData::_EmptyUser);
    };
} // namespace auth