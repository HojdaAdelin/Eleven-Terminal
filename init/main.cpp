#include <iostream>
#include <math.h>
#include <windows.h>

#include "../Calculator/calculator.h"
#include "../components/algebra.h"
#include "../components/info/info.h"
#include "../components/geometry.h"
#include "../Settings/settings.h"
#include "../components/Code/code_include.h"

using namespace std;

int main() {


  // Color atribute
  loadconfigcolor();
  //system("Color 01");
  
  string choose;
  int menaws;
  // Menu atribute
  load_menu();
  
  cout << endl;
  cin >> choose;

  if (choose == "1") {
    system("cls");
    simpleCalculator();
  } else if (choose == "2") {
    system("cls");
      cout << "Eleven Terminal - Algebra calculations" << endl;
      cout << "\n[1] Arithmetic mean" << endl;
      cout << "[2] Weighting mean" << endl;
      cout << "[3] Divisors of a number" << endl;
      cout << "[4] Sum of divisors" << endl;
      cout << "[5] The square of a number" << endl;
      cout << "[6] Greatest common factor" << endl;
      cout << "[7] The least common multiple" << endl;
      cout << "[8] The sum of the digits of a number" << endl;
      cout << "[9] Geometric mean" << endl;
      cout << "[10] Even or Odd number" << endl;
      cout << "[11] Gauss sum" << endl;
      cout << "[12] Calculation with reports" << endl;
      cout << "\n[0] Menu" << endl;
      cout << endl;
      cin >> menaws;

      if (menaws == 1){
        system("cls");
        arithmeticMean();
      } else if(menaws == 2) {
        system("cls");
        weightingMean();
      } else if(menaws == 3) {
        system("cls");
        divisors();
      } else if(menaws == 4) {
        system("cls");
        divisorssum();
      } else if(menaws == 5) {
        system("cls");
        squarenumber();
      } else if(menaws == 6) {
        system("cls");
        factor();
      } else if(menaws == 7) {
        system("cls");
        multiple();
      } else if (menaws == 8) {
        system("cls");
        digit();
      } else if (menaws == 9) {
        system("cls");
        geomean();
      } else if (menaws == 10) {
        system("cls");
        oddeven();
      } else if (menaws == 11) {
        system("cls");
        Gauss();
      } else if (menaws == 12) {
        system("cls");
        raport();
      } else if (menaws == 0) {
        system("cls");
        main();
      }
  } else if (choose == "3") {
    system("cls");
      cout << "Eleven Terminal - Percent calculation" << endl;
      cout << "\n[1] Percentages" << endl;
      cout << "[2] Possibility" << endl;
      cout << "\n[0] Main Menu" << endl;
      cout << endl;
      cin >> menaws;
      if (menaws == 1) {
        system("cls");
        percentages();
      } else if(menaws == 2) {
        system("cls");
        possibility();
      } else if (menaws == 0) {
        system("cls");
        main();
      }
  } else if (choose == "4") {
    system("cls");
      cout << "Eleven Terminal - Complex calculations" << endl;
      cout << "\n! There is nothing here for now !" << endl;
      cout << "\n[9] Exit" << endl;
      cin >> menaws;

      if (menaws == 9) {
        system("cls");
        main();
      }
  } else if (choose == "5") {
    int alt;
      system("cls");
      cout << "Eleven Terminal - Geometric Area" << endl;
      cout << "\n[1] Triangle Area" << endl;
      cout << "[2] Square Area" << endl;
      cout << "[3] Right angle Area" << endl;
      cout << "[4] Diamond Area" << endl;
      cout << "[5] Trapeze Area" << endl;
      cout << "[6] Circle Area" << endl;
      cout << "\n[9] Menu" << endl;
      cout << endl;
      cin >> alt;
      switch (alt) {
        case 1:
          system("cls");
          triangleArea();
        case 2:
          system("cls");
          squareArea();
        case 3:
          system("cls");
          rightangleArea();
        case 4:
          system("cls");
          diamondArea();
        case 5:
          system("cls");
          trapezeArea();
        case 6:
          system("cls");
          circle();
        case 9:
          system("cls");
          main();
      }
  } else if (choose == "6") {
    system("cls");
      cout << "Eleven Terminal - Geometry calculation" << endl;
      cout << "\n[1] Angle calculation" << endl;
      cout << "[2] T30 theorem" << endl;
      cout << "[3] Height theorem" << endl;
      cout << "[4] Pythagoras theorem" << endl;
      cout << "[5] Side theorem" << endl;
      cout << "\n[0] Main Menu" << endl;
      cout << endl;
      cin >> menaws;
      if (menaws == 1) {
        system("cls");
        angle();
      } else if (menaws == 0) {
        system("cls");
        main();
      } else if (menaws == 2) {
        system("cls");
        t30();
      } else if (menaws == 3) {
        system("cls");
        heightTheoreme();
      } else if (menaws == 4) {
        system("cls");
        Pythagoras();
      } else if (menaws == 5) {
        system("cls");
        side();
      }
  } else if (choose == "7") {
    system("cls");
      info();
  } else if (choose == "8") {
    system("cls");
      theorems();
  } else if (choose == "9") {
    system("cls");
      creator();
  } else if (choose == "10") {
    system("cls");
      updates();
  } else if (choose == "11") {
    system("cls");
      settin();
  } else if (choose == "dev") {
    system("cls");
    menu_code();
  } else if (choose == "exit") {
    system("exit");
  } else {
    system("cls");
      cout << "!  Enter a valid option  !" << endl;
      cout << endl;
      main();
  }

      
  return 0;
}

