#include <iostream>
#include "info.h"


using namespace std;


void theorems() {

    int aws;

    cout << "Eleven Terminal - Theorems" << endl;
    cout << "[1] Geometric areas" << endl;
    cout << "[2] Algebra theorems" << endl;

    cout << "\n[9] Exit" << endl; 
    cin >> aws;

    if (aws == 9) {
        system("cls");
        main();
    } else if (aws == 1) {
        system("cls");
        areas();
    } else if (aws == 2) {
        system("cls");
        algebra();
    } else {
        system("cls");
        cout << "Wrong termen!" << endl;
        theorems();
    }
}