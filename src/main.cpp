#include <iostream>
#include <cstdlib>
#include <fstream>
#include "inc/parser.h"

using namespace std;

int main(int argc, char *argv[])
{
  if (argc > 1)
  {
    if (string(argv[argc - 1]).rfind("--", 0) == 0)
    {
      cout << "StartupError: No input file provided." << endl;
      exit(1);
    }
  }
  else
  {
    cout << "StartupError: No input file provided." << endl;
    exit(1);
  }

  string js_input;

  ifstream js_input_source(argv[argc - 1]);

  while (getline(js_input_source, js_input))
  {
    cout << js_input << endl;
  }

  js_input_source.close();

  exit(0);
}
