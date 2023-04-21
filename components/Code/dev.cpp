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

}

void generate_dev() {

}

void gplusplus() {

}