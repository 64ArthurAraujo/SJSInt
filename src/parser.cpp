#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>

using namespace std;

vector<string> split_statement(string statement)
{
  string delimiter = " ";

  size_t pos = 0;
  string token;

  vector<string> statement_vec;

  while ((pos = statement.find(delimiter)) != string::npos)
  {
    token = statement.substr(0, pos);

    statement_vec.push_back(token);

    statement.erase(0, pos + delimiter.length());
  }

  return statement_vec;
}
