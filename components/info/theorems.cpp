#include <iostream>
#include "info.h"


using namespace std;


void theorems() {

    int aws;

    cout << "Eleven Terminal - Theorems" << endl;
    cout << "\n1. Arithmetic mean: (a+b) / 2" << endl;
    cout << "2. Weighting mean: (a*p1 + b*p2) / p1 + p2" << endl;
    cout << "3. Divisors of a number: A | x-numbers" << endl;
    cout << "4. Geometric mean: sqrt(a*b)" << endl;
    cout << "5. Diamond Area: (d1 * d2) / 2" << endl;
    cout << "6. Trapeze Area: ((b+B) * h) / 2" << endl;
    cout << "7. Circle Area: r * r * 3.14" << endl;

    cout << "\n[9] Exit" << endl; 
    cin >> aws;

    if (aws == 9) {
        system("cls");
        main();
    } else {
        system("cls");
        cout << "Wrong termen!" << endl;
        theorems();
    }
}