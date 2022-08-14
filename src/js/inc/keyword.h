#include <string>

using namespace std;

namespace JSInternal
{
    class Keyword
    {
    public:
        string Value;
        string Type;

        Keyword(string value);
        ~Keyword();
    };
}