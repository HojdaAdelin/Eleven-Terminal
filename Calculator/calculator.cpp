#include <iostream>
#include "calculator.h"
#include <math.h>

using namespace std;

void simpleCalculator() {
  
  int number1, number2, result, aws, operation;

  cout << "Eleven Terminal - Calculator" << endl;
  cout << "Select the operation:" << endl;
  cout << "\n[1] +" << endl;
  cout << "[2] -" << endl;
  cout << "[3] *" << endl;
  cout << "[4] /" << endl;
  cout << "[5] %" << endl;
  cout << "[6] sqrt" << endl;
  cout << "\n[0] Exit" << endl;
  cout << endl;
  cin >> operation;

  if (operation == 0) {
    system("cls");
    main();
  } else {
  cout << "\nEnter 2 numbers" << endl;
  cin >> number1 >> number2;

  switch (operation) {
    case 1:
      cout << endl;
      cout << number1 << " + " << number2 << " = " << number1 + number2;
      cout << "\n\n[8] Retry" << endl;
      cout << "[9] Exit" << endl;
      cin >> aws;
      if (aws == 9) {
        system("cls");
        main();
      } else if (aws == 8) {
        system("cls");
        simpleCalculator();
      }
    case 2:
      cout << endl;
      cout << number1 << " - " << number2 << " = " << number1 - number2;
      cout << "\n\n[8] Retry" << endl;
      cout << "[9] Exit" << endl;
      cin >> aws;
      if (aws == 9) {
        system("cls");
        main();
      } else if (aws == 8) {
        system("cls");
        simpleCalculator();
      }
    case 3:
      cout << endl;
      cout << number1 << " * " << number2 << " = " << number1 * number2;
      cout << "\n\n[8] Retry" << endl;
      cout << "[9] Exit" << endl;
      cin >> aws;
      if (aws == 9) {
        system("cls");
        main();
      } else if (aws == 8) {
        system("cls");
        simpleCalculator();
      }
    case 4:
      cout << endl;
      cout << number1 << " / " << number2 << " = " << number1 / number2;
      cout << "\n\n[8] Retry" << endl;
      cout << "[9] Exit" << endl;
      cin >> aws;
      if (aws == 9) {
        system("cls");
        main();
      } else if (aws == 8) {
        system("cls");
        simpleCalculator();
      }
    case 5:
      cout << endl;
      cout << number1 << " % " << number2 << " = " << number1 % number2;
      cout << "\n\n[8] Retry" << endl;
      cout << "[9] Exit" << endl;
      cin >> aws;
      if (aws == 9) {
        system("cls");
        main();
      } else if (aws == 8) {
        system("cls");
        simpleCalculator();
      }
    case 6:
      cout << "\nSQRT " << number1 << " = " << sqrt(number1) << "\nSQRT " << number2 << " = " << sqrt(number2) << endl;
      cout << "\n\n[8] Retry" << endl;
      cout << "[9] Exit" << endl;
      cin >> aws;
      if (aws == 9) {
        system("cls");
        main();
      } else if (aws == 8) {
        system("cls");
        simpleCalculator();
      }
    
  }
  }

  



}