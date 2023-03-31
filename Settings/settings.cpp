#include <iostream>
#include <fstream>
#include "settings.h"

using namespace std;

void color();
void configcolor();
int colorcfg;

void settin(){

    int aws;

    cout << "Eleven Terminal - Settings" << endl;
    cout << "\n[1] Color changer" << endl;
    cout << "[2] Menu changer" << endl;
    cout << "\n[9] Exit" << endl;

    cout << endl;

    cin >> aws;

    if (aws == 1) {
        system("cls");
        color();
    } else if(aws == 9) {
        system("cls");
        main();
    } else if (aws == 2) {
        system("cls");
        menu();
    }

}

void color() {

    int aws;


    cout << "Eleven Terminal - Colors" << endl;
    cout << "\n[1] Default" << endl;
    cout << "[2] Green text" << endl;
    cout << "[3] Red text" << endl;
    cout << "[4] Blue text" << endl;
    cout << "[5] Black text & white bg" << endl;
    cout << "[6] Purple text" << endl;
    cout << "[7] Aqua text" << endl;
    cout << "\n[8] Menu" << endl;
    cout << endl;
    cin >> colorcfg;

    if (colorcfg == 1) {
        system("Color 07");
        configcolor();
        color();
    } else if(colorcfg == 2) {
        system("Color 02");
        configcolor();
        color();
    } else if(colorcfg == 3) {
        system("Color 04");
        configcolor();
        color(); 
    } else if(colorcfg == 4) {
        system("Color 01");
        configcolor();
        color();
    } else if(colorcfg == 5) {
        system("Color 70");
        configcolor();
        color();
    } else if(colorcfg == 8) {
        system("cls");
        settin();
    } else if (colorcfg == 6) {
        system("Color 05");
        configcolor();
        color();
    } else if (colorcfg == 7) {
        system("Color 03");
        configcolor();
        color();
    }

}


void configcolor(){
    
    ofstream readingConfig("color.cfg");

    readingConfig << colorcfg << endl;

    readingConfig.close();

    

}

void loadconfigcolor() {
    int loadcolor;

    ifstream loadingConfig("color.cfg");

    loadingConfig >> loadcolor;

    loadingConfig.close();

    if (loadcolor == 1) {
        system("Color 07");
        
        
    } else if(loadcolor == 2) {
        system("Color 02");
        
    } else if(loadcolor == 3) {
        system("Color 04");
         
    } else if(loadcolor == 4) {
        system("Color 01");
        
    } else if(loadcolor == 5) {
        system("Color 70");
        
    } else if (loadcolor == 6) {
        system("Color 05");
        
    } else if (loadcolor == 7) {
        system("Color 03");
        
    }

}