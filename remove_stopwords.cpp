// filter5.cpp
#include <iostream>
#include <fstream>
#include <sstream>
#include <set>
using namespace std;

int main() {
    ifstream in("out4.txt");
    ofstream out("out5.txt");

    set<string> stopWords = {"في","من","على","الى","عن","ما","هو","هي","كان","قد"};

    string word;
    while (in >> word) {
        if (stopWords.find(word) == stopWords.end()) {
            out << word << " ";
        }
    }

    return 0;
}