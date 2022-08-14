#include <string>
#include <vector>
#include "inc/variable.h"

using namespace std;

namespace JSInternal
{
  VariableAssign varAssign[] = {
      VariableAssign("let", Mutable),
      VariableAssign("const", Imutable),
  };
}
