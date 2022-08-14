#include <string>

using namespace std;

namespace JSInternal
{
  class Keyword
  {
  public:
    string Value;
    string Type = "keyword";

    Keyword(string value);
    ~Keyword();
  };

  Keyword::Keyword(string value)
  {
    this->Value = value;
  }

  Keyword::~Keyword()
  {
  }

}
