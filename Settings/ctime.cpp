#include <iostream>
#include "settings.h"
#include "../Time/time.h"
#include <fstream>

using namespace std;

int date_time;
int config_date;
void ctime() {

    cout << "Eleven Terminal - Time" << endl;
    cout << "\n[1] Enable date" << endl;
    cout << "[2] Disable date" << endl;
    cout << "\n[8] Exit" << endl;
    
    cin >> date_time;

    if (date_time == 1) {
        btime();
        ctime();
    } else if (date_time == 2) {
        btime();
        ctime();
    } else if (date_time == 8) {
        system("cls");
        settin();
    }

}

void btime() {
    

    ofstream writeDate("date.cfg");

    writeDate << date_time << endl;

    writeDate.close();
    
}

void gtime() {
    

    ifstream configDate("date.cfg");

    configDate >> config_date;

    configDate.close();

    if (config_date == 1) {
        time();
    } else if (config_date == 2) {
        
    }

}