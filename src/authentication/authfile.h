#pragma once

#include <string>

namespace auth
{
    class authfile
    {
    private:
        std::string USER;
        std::string PASS;
        std::string ROLE;

    public:
        authfile(std::string filename = "");
        bool authenticate();
    };
} // namespace auth
