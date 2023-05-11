#include <iostream>
#include "code_include.h"

using namespace std;

void menu_code() {

    int aws;

    cout << "Eleven Terminal - Dev" << endl;
    cout << "\n[1] Config code display" << endl;
    cout << "[2] Current date code display" << endl;
    cout << "[3] Generator code display" << endl;
    cout << "[4] G++ code display" << endl;
    cout << "\n[9] Exit" << endl;

    cin >> aws;

    if (aws == 1) {
        cout << endl;
        config_dev();
    } else if (aws == 2) {
        cout << endl;
        date_dev();
    } else if (aws == 3) {
        cout << endl;
        generate_dev();
    } else if (aws == 4) {
        cout << endl;
        gplusplus();
    } else if (aws == 9) {
        system("cls");
        main();
    }
}