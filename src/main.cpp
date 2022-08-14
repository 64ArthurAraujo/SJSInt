#include <iostream>
#include <cstdlib>
#include <fstream>
#include "inc/parser.h"

using namespace std;

int main(int argc, char *argv[])
{
  string myText;

  ifstream MyReadFile("example.js");

  while (getline(MyReadFile, myText))
  {

    cout << myText << endl;
  }

  MyReadFile.close();

  return 0;
}
