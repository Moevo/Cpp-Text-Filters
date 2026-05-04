// filter1.cpp
#include <iostream>
#include <fstream>
#include <regex>
using namespace std;

int main() {
    ifstream in("index.html");
    ofstream out("out1.txt");

    string content((istreambuf_iterator<char>(in)), istreambuf_iterator<char>());

    
    content = regex_replace(content,
        regex("<style[^>]*>[\\s\\S]*?</style>", regex::icase),
        " ");


    content = regex_replace(content,
        regex("<script[^>]*>[\\s\\S]*?</script>", regex::icase),
        " ");

   
    content = regex_replace(content, regex("<[^>]*>"), " ");

    out << content;

    return 0;
}