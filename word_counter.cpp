// filter7.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("out5.txt");

    int count = 0;
    string word;

    while (in >> word) {
        count++;
    }

    cout << "Total words: " << count << endl;

    return 0;
}