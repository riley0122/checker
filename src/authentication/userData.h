#include <string>

namespace userData
{
    struct userData
    {
        std::string username;
        std::string role;
        std::string pass;
    };

    extern userData _EmptyUser;

    void parseLine(std::stringstream *line);
} // namespace userData