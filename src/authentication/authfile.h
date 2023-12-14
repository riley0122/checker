#ifndef AUTHFILE_H
#define AUTHFILE_H

#include <string>

namespace auth
{
    class authfile
    {
    private:
        std::string USER;
        std::string PASS;

    public:
        authfile(std::string filename = "");
        bool authenticate();
    };
} // namespace auth

#endif