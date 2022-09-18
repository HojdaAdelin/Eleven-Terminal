#include <iostream>
#include "calculator.h"
#include <math.h>

using namespace std;

void simpleCalculator() {
  
  int number1, number2, result, aws, operation;


  cout << "Select the operation:" << endl;
  cout << "\n1. +" << endl;
  cout << "2. -" << endl;
  cout << "3. *" << endl;
  cout << "4. /" << endl;
  cout << "5. %" << endl;
  cout << "6. sqrt" << endl;

  cin >> operation;

  cout << "\nEnter 2 numbers" << endl;
  cin >> number1 >> number2;

  switch (operation) {
    case 1:
      cout << endl;
      cout << number1 << " + " << number2 << " = " << number1 + number2;
      cout << "\n\n9. Exit" << endl;
      cin >> aws;
      if (aws == 9) {
        system("cls");
        main();
      }
    case 2:
      cout << endl;
      cout << number1 << " - " << number2 << " = " << number1 - number2;
      cout << "\n\n9. Exit" << endl;
      cin >> aws;
      if (aws == 9) {
        system("cls");
        main();
      }
    case 3:
      cout << endl;
      cout << number1 << " * " << number2 << " = " << number1 * number2;
      cout << "\n\n9. Exit" << endl;
      cin >> aws;
      if (aws == 9) {
        system("cls");
        main();
      }
    case 4:
      cout << endl;
      cout << number1 << " / " << number2 << " = " << number1 / number2;
      cout << "\n\n9. Exit" << endl;
      cin >> aws;
      if (aws == 9) {
        system("cls");
        main();
      }
    case 5:
      cout << endl;
      cout << number1 << " % " << number2 << " = " << number1 % number2;
      cout << "\n\n9. Exit" << endl;
      cin >> aws;
      if (aws == 9) {
        system("cls");
        main();
      }
    case 6:
      cout << "\nSQRT " << number1 << " = " << sqrt(number1) << "\nSQRT " << number2 << " = " << sqrt(number2) << endl;
      cout << "\n9. Exit" << endl;
      cin >> aws;
      if (aws == 9) {
        system("cls");
        main();
      }
      system("pause");    

  }



}