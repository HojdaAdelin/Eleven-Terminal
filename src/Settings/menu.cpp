#include <iostream>
#include <fstream>
#include "settings.h"
#include "../Time/time.h"
using namespace std;

void menu_config();
int menuch;
int global_menu;

void menu() {

    cout << "Eleven Terminal - Menu" << endl;
    cout <<  "\n[1] Default menu" << endl;
    cout << "[2] Old menu" << endl;
    cout << "\n[8] Menu" << endl;
    cout << endl;
    cin >> menuch;

    if (menuch == 1) {

        menu_config();
        menu();

    } else if (menuch == 2) {

        menu_config();
        menu();

    } else if (menuch == 8) {

        system("cls");
        settin();

    }

}

void menu_config() {

    ofstream writeMenu("menu.cfg");

    writeMenu << menuch << endl;

    writeMenu.close();

}

void load_menu() {

    ifstream readMenu("menu.cfg");

    readMenu >> global_menu;

    readMenu.close();

    if (global_menu == 1) {
    
    cout << "Eleven Terminal by @HojdaAdelin";
    gtime();
    
    

    cout << "\n$Algebra" << endl;
    cout << "[1] Clasic calculator" << endl;
    cout << "[2] Algebra calculations" << endl;
    cout << "[3] Percent calculation" << endl;
    cout << "[4] Complex calculations" << endl;

    cout << "\n$Geometry" << endl;
    cout << "[5] Geometric Area" << endl;
    cout << "[6] Geometry calculation" << endl;
    
    cout << "\n$Informations" << endl;
    cout << "[7] Categories info" << endl;
    cout << "[8] Theorems" << endl;
    cout << "[9] About the app" << endl;
    cout << "[10] Updates & Bugs" << endl;

    cout << "\n$Customize" << endl;
    cout << "[11] Settings" << endl;

  } else if (global_menu == 2) {

    cout << "Eleven Terminal by @HojdaAdelin"; 
    gtime();
    
    
    cout << "\n[1] Clasic calculator" << endl;
    cout << "[2] Algebra calculations" << endl;
    cout << "[3] Percent calculation" << endl;
    cout << "[4] Complex calculations" << endl;

    
    cout << "[5] Geometric Area" << endl;
    cout << "[6] Geometry calculation" << endl;
    
    
    cout << "\n[7] Categories info" << endl;
    cout << "[8] Theorems" << endl;
    cout << "[9] About the app" << endl;
    cout << "[10] Updates & Bugs" << endl;

    
    cout << "[11] Settings" << endl;

  } else {

    cout << "Eleven Terminal by @HojdaAdelin"; 
    gtime();
    
    
    cout << "\n$Algebra" << endl;
    cout << "[1] Clasic calculator" << endl;
    cout << "[2] Algebra calculations" << endl;
    cout << "[3] Percent calculation" << endl;
    cout << "[4] Complex calculations" << endl;

    cout << "\n$Geometry" << endl;
    cout << "[5] Geometric Area" << endl;
    cout << "[6] Geometry calculation" << endl;
    
    cout << "\n$Informations" << endl;
    cout << "[7] Categories info" << endl;
    cout << "[8] Theorems" << endl;
    cout << "[9] About the app" << endl;
    cout << "[10] Updates & Bugs" << endl;

    cout << "\n$Customize" << endl;
    cout << "[11] Settings" << endl;

  }

}