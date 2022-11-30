#include <iostream>
#include <math.h>
#include <windows.h>

#include "../components/calculator.h"
#include "../components/algebra.h"
#include "../components/info/info.h"
#include "../components/geometry.h"
#include "../components/Settings/settings.h"


using namespace std;

int main() {

  loadconfigcolor();
  //system("Color 01");

  int choose;
  
  cout << "Welcome to Eleven Terminal!" << endl;
  cout << "\n[1] Clasic calculator" << endl;
  cout << "[2] Algebra calculations" << endl;
  cout << "[3] Geometric Area" << endl;
  cout << "[4] Percent calculation" << endl;
  cout << "[5] Geometry calculation" << endl;
  cout << "\n[6] Info" << endl;
  cout << "[7] Tutorials" << endl;
  cout << "[8] About" << endl;
  cout << "[9] GitHub" << endl;
  cout << "[10] Updates" << endl;
  cout << "[11] Settings" << endl;
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
      } else if (choose == 0) {
        system("cls");
        main();
      }



    case 3:
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

    case 4:
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
    case 5:
      system("cls");
      cout << "Eleven Terminal - Geometry calculation" << endl;
      cout << "\n[1] Angle calculation" << endl;
      cout << "\n[0] Main Menu" << endl;
      cout << endl;
      cin >> choose;
      if (choose == 1) {
        system("cls");
        angle();
      } else if (choose == 0) {
        system("cls");
        main();
      }
    case 6:
      system("cls");
      info();
    case 7:
      system("cls");
      tutorials();
    case 8:
      system("cls");
      creator();
    case 9:
      system("cls");
      gitHub();
    case 10:
      system("cls");
      updates();
    case 11:
      system("cls");
      settin();
  }
  return 0;
}

