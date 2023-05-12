#include <iostream>
#include "info.h"

using namespace std;

void help() {
    int aws;
    string docs = "https://github.com/HojdaAdelin/Eleven-Terminal/tree/master/doc";
    string read = "https://github.com/HojdaAdelin/Eleven-Terminal";
    cout << "Eleven Terminal - Help" << endl;
    cout << "\n[1] Open docs" << endl;
    cout << "[2] Open README" << endl;
    cout << "\n[9] Exit" << endl;

    cin >> aws;

    if (aws == 1) {
        
        system(string("start " + docs).c_str());
        system("cls");
        help();
    } else if (aws == 2) {
        system(string("start " + read).c_str());
        system("cls");
        help();
    } else if (aws == 9) {
        system("cls");
        main();
    } else {
        system("cls");
        cout << "Wrong termen!" << endl;
        help();
    }

}