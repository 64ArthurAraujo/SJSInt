#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>

using namespace std;

void parse_file(ifstream *jsfile);

vector<string> split_statement(string statement);
