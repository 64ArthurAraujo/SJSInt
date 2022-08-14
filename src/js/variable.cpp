#include <string>

using namespace std;

namespace JSInternal
{
  enum VariableType
  {
    Mutable = true,
    Imutable = false
  };

  class VariableAssign
  {
  public:
    string Value;
    string Type = "var-asgn";
    VariableType IsMutable;

    VariableAssign(string value, VariableType mutability);
    ~VariableAssign();
  };

  VariableAssign::VariableAssign(string value, VariableType mutability)
  {
    this->Value = value;
    this->IsMutable = mutability;
  }
}
