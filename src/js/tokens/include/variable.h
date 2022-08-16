#pragma once

#include <iostream>
#include <string>

using namespace std;

namespace Internal::Tokens::Variables
{
  class Let
  {
  public:
    string Keyword = "let";
    string Name;
    string Value;

    bool Mutable = true;

    Let(string name, string value);
  };
}
