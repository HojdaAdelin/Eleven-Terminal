#include <iostream>
#include <math.h>
#include "../components/calculator.h"
#include "../components/algebra.h"
#include "../components/info/info.h"
#include "../components/geometry.h"

using namespace std;

int main() {

  int choose;

  cout << "Welcome to Eleven Terminal!" << endl;
  cout << "\n1. Clasic Calculator" << endl;
  cout << "2. Algebra calculations" << endl;
  cout << "3. The sum of the digits of a number" << endl;
  cout << "4. Geometric Area" << endl;
  cout << "5. Percentages" << endl;
  cout << "6. Possibility" << endl;
  cout << "7. Angle calculation" << endl;
  cout << "\n8. About" << endl;
  cout << "9. Creator" << endl;
  cout << "10. GitHub" << endl;
  cout << "11. Updates" << endl;

  cin >> choose;

  switch (choose) {
    case 1:
      system("cls");
      simpleCalculator();
    case 2:
      int choose;
      system("cls");
      cout << "1. Arithmetic mean" << endl;
      cout << "2. Weighting mean" << endl;
      cout << "3. Divisors of a number" << endl;
      cout << "4. Sum of divisors" << endl;
      cout << "5. The square of a number" << endl;
      cout << "6. Greatest common factor" << endl;
      cout << "7. The least common multiple" << endl;

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
      }



    case 3:
      system("cls");
      digit();
    case 4:
      int alt;
      system("cls");

      cout << "1. Triangle Area" << endl;
      cout << "2. Square Area" << endl;
      cout << "3. Right angle Area" << endl;
      cout << "4. Diamond Area" << endl;
      cout << "5. Trapeze Area" << endl;
      cout << "6. Circle Area" << endl;
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
      }
    case 5:
      system("cls");
      percentages();
    case 6:
      system("cls");
      possibility();
    case 7:
      system("cls");
      angle();
    case 8:
      system("cls");
      about();
    case 9:
      system("cls");
      creator();
    case 10:
      system("cls");
      gitHub();
    case 11:
      system("cls");
      updates();
  }
  return 0;
}

