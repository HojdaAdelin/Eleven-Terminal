#include <iostream>
#include "code_include.h"

using namespace std;

void config_dev() {
    
    int aws;

    cout << "//write\nofstream write('file.cfg');\nwrite << variable << endl;\nwrite.close();" << endl;
    cout << "\n//read\nifstream read('file.cfg');\nread >> global_variable\nread.close();" << endl;
    cout << endl;
    cout << ""; siganture();
    cout << "\n\n[8] Dev menu" << endl;
    cout << "[9] Exit" << endl;

    cin >> aws;

    if (aws == 8) {
        system("cls");
        menu_code();
    } else if (aws == 9) {
        system("cls");
        main();
    }
}

void date_dev() {
    int aws;

    cout << "std::time_t t = std::time(0);\nstd::tm* now = std::localtime(&t);\nstd::cout << 'Current date: ' << (now->tm_year + 1900) << '-'\n     << (now->tm_mon + 1) << '-'\n     <<  now->tm_mday;" << endl;
    cout << endl;
    cout << ""; siganture();

    cout << "\n\n[8] Dev menu" << endl;
    cout << "[9] Exit" << endl;

    cin >> aws;

    if (aws == 8) {
        system("cls");
        menu_code();
    } else if (aws == 9) {
        system("cls");
        main();
    }
}

void generate_dev() {
    int aws;

    cout << "// String declaration\nconst int ch_MAX = 61;\nstring RandomString(int ch){\nchar alpha[ch_MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',\n                      'h', 'i', 'j', 'k', 'l', 'm', 'n',\n                      'o', 'p', 'q', 'r', 's', 't', 'u',\n                      'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D',\n                      'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',\n                      'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',\n                      'V', 'W', 'X', 'Y', 'Z', '1', '2', '3',\n                      '4', '5', '6', '7', '8', '9'};\nstring result = '';\nfor (int i = 0; i<ch; i++)\n    result = result + alpha[rand() % ch_MAX];\nreturn result;" << endl;
    cout << "\n// Function\nsrand(time(NULL));\nint ch = 16;\ncout<<RandomString(ch);" << endl;

    cout << endl;
    cout << ""; siganture();

    cout << "\n\n[8] Dev menu" << endl;
    cout << "[9] Exit" << endl;

    cin >> aws;

    if (aws == 8) {
        system("cls");
        menu_code();
    } else if (aws == 9) {
        system("cls");
        main();
    }
}

void gplusplus() {
    int aws;

    cout << "g++ -o Name.exe main.exe" << endl;

    cout << endl;
    cout << ""; siganture();

    cout << "\n\n[8] Dev menu" << endl;
    cout << "[9] Exit" << endl;

    cin >> aws;

    if (aws == 8) {
        system("cls");
        menu_code();
    } else if (aws == 9) {
        system("cls");
        main();
    }
}