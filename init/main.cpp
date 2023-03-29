#include <iostream>
#include <math.h>
#include <windows.h>

#include "../Calculator/calculator.h"
#include "../components/algebra.h"
#include "../components/info/info.h"
#include "../components/geometry.h"
#include "../Settings/settings.h"
using namespace std;

int main() {


  // Color atribute
  loadconfigcolor();
  //system("Color 01");
  
  int choose;
  
  // Menu atribute
  load_menu();
  
  cout << endl;
  cin >> choose;

  switch (choose) {
    case 1:
      system("cls");
      simpleCalculator();
    case 2:
      
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
      cout << "\n[0] Menu" << endl;
      cout << endl;
      cin >> choose;

      if (choose == 1){
        system("cls");
        arithmeticMean();
      } else if(choose == 2) {
        system("cls");
        weightingMean();
      } else if(choose == 3) {
        system("cls");
        divisors();
      } else if(choose == 4) {
        system("cls");
        divisorssum();
      } else if(choose == 5) {
        system("cls");
        squarenumber();
      } else if(choose == 6) {
        system("cls");
        factor();
      } else if(choose == 7) {
        system("cls");
        multiple();
      } else if (choose == 8) {
        system("cls");
        digit();
      } else if (choose == 9) {
        system("cls");
        geomean();
      } else if (choose == 10) {
        system("cls");
        oddeven();
      } else if (choose == 11) {
        system("cls");
        Gauss();
      } else if (choose == 0) {
        system("cls");
        main();
      }



    case 5:
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

    case 3:
      system("cls");
      cout << "Eleven Terminal - Percent calculation" << endl;
      cout << "\n[1] Percentages" << endl;
      cout << "[2] Possibility" << endl;
      cout << "\n[0] Main Menu" << endl;
      cout << endl;
      cin >> choose;
      if (choose == 1) {
        system("cls");
        percentages();
      } else if(choose == 2) {
        system("cls");
        possibility();
      } else if (choose == 0) {
        system("cls");
        main();
      }
    case 6:
      system("cls");
      cout << "Eleven Terminal - Geometry calculation" << endl;
      cout << "\n[1] Angle calculation" << endl;
      cout << "[2] T30 theorem" << endl;
      cout << "[3] Height theorem" << endl;
      cout << "[4] Pythagoras theorem" << endl;
      cout << "\n[0] Main Menu" << endl;
      cout << endl;
      cin >> choose;
      if (choose == 1) {
        system("cls");
        angle();
      } else if (choose == 0) {
        system("cls");
        main();
      } else if (choose == 2) {
        system("cls");
        t30();
      } else if (choose == 3) {
        system("cls");
        heightTheoreme();
      } else if (choose == 4) {
        system("cls");
        Pythagoras();
      }
    case 4:
      system("cls");
      cout << "Eleven Terminal - Complex calculations" << endl;

    case 7:
      system("cls");
      info();
    case 8:
      system("cls");
      tutorials();
    case 9:
      system("cls");
      creator();
    case 10:
      system("cls");
      updates();
    case 11:
      system("cls");
      settin();
    
    default:
      system("cls");
      cout << "!  Enter a valid option  !" << endl;
      cout << endl;
      main();
      break;
  }
  return 0;
}

