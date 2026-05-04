// filter3.cpp
#include <iostream>
#include <fstream>
#include <regex>
using namespace std;

int main() {
    ifstream in("out2.txt");
    ofstream out("out3.txt");

    string line;
    while (getline(in, line)) {
        line = regex_replace(line, regex("[[:punct:]]"), "");
        out << line << endl;
    }

    return 0;
}