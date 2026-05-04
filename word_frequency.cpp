// filter6.cpp
#include <iostream>
#include <fstream>
#include <map>
using namespace std;

int main() {
    ifstream in("out5.txt");
    ofstream out("final.txt");

    map<string, int> freq;
    string word;

    while (in >> word) {
        freq[word]++;
    }

    for (auto &p : freq) {
        out << p.first << " : " << p.second << endl;
    }

    return 0;
}