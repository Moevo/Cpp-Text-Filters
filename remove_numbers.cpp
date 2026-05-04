// filter2.cpp
#include <iostream>
#include <fstream>
#include <regex>
using namespace std;

int main() {
    ifstream in("out1.txt");
    ofstream out("out2.txt");

    string line;
    while (getline(in, line)) {
        line = regex_replace(line, regex("[0-9]"), "");
        out << line << endl;
    }

    return 0;
}