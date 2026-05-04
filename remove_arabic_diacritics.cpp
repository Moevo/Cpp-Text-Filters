// filter4.cpp
#include <iostream>
#include <fstream>
using namespace std;

// تحقق إذا الكود يونكود هو تشكيل
bool is_diacritic(unsigned int code) {
    return (code >= 0x064B && code <= 0x065F) ||
           (code == 0x0670) ||
           (code >= 0x06D6 && code <= 0x06ED);
}

int main() {
    ifstream in("out3.txt", ios::binary);
    ofstream out("out4.txt", ios::binary);

    string line;

    while (getline(in, line)) {
        string result;

        for (size_t i = 0; i < line.size();) {
            unsigned char c = line[i];

            if (c < 128) {
                // ASCII
                result += c;
                i++;
            } else if ((c >> 5) == 0x6) {
                // 2-byte UTF-8
                unsigned int code =
                    ((c & 0x1F) << 6) |
                    (line[i+1] & 0x3F);

                if (!is_diacritic(code)) {
                    result += line[i];
                    result += line[i+1];
                }
                i += 2;
            } else if ((c >> 4) == 0xE) {
                // 3-byte UTF-8 (العربي هون)
                unsigned int code =
                    ((c & 0x0F) << 12) |
                    ((line[i+1] & 0x3F) << 6) |
                    (line[i+2] & 0x3F);

                if (!is_diacritic(code)) {
                    result += line[i];
                    result += line[i+1];
                    result += line[i+2];
                }
                i += 3;
            } else {
                // أي شيء ثاني
                result += c;
                i++;
            }
        }

        out << result << "\n";
    }

    return 0;
}