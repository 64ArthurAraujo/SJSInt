#include <iostream>
#include <cstdlib>
#include <fstream>
#include "include/parser.h"

using namespace std;

void print_nofile()
{
  cout << "StartupError: No input file provided!" << endl;
  cout << "Inform a path or try to run again with the '--shell' flag." << endl;
}

int main(int argc, char *argv[])
{
  if (argc > 1)
  {
    if (string(argv[argc - 1]).rfind("--", 0) == 0)
    {
      print_nofile();
      exit(1);
    }
  }
  else
  {
    print_nofile();
    exit(1);
  }

  ifstream js_input_source(argv[argc - 1]);

  // pn: directs the basic "flow" of the application to another file
  parse_file(&js_input_source);
}
