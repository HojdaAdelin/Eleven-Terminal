#include <iostream>
#include "calculator.h"


using namespace std;

void simpleCalculator() {
  char operation;
  int number1, number2, result, aws;


  cout << "Enter the operatiun do you want\n+\n-\n*\n/\n%" << endl; cout << endl;
  cin >> operation;

  cout << "\nEnter 2 numbers" << endl;
  cin >> number1 >> number2;

  switch (operation) {
    case '+':
      cout << endl;
      cout << number1 << " + " << number2 << " = " << number1 + number2;
      cout << "\n\n9. Exit" << endl;
      cin >> aws;
      if (aws == 9) {
        system("cls");
        main();
      }
    case '-':
      cout << endl;
      cout << number1 << " - " << number2 << " = " << number1 - number2;
      cout << "\n\n9. Exit" << endl;
      cin >> aws;
      if (aws == 9) {
        system("cls");
        main();
      }
    case '*':
      cout << endl;
      cout << number1 << " * " << number2 << " = " << number1 * number2;
      cout << "\n\n9. Exit" << endl;
      cin >> aws;
      if (aws == 9) {
        system("cls");
        main();
      }
    case '/':
      cout << endl;
      cout << number1 << " / " << number2 << " = " << number1 / number2;
      cout << "\n\n9. Exit" << endl;
      cin >> aws;
      if (aws == 9) {
        system("cls");
        main();
      }
    case '%':
      cout << endl;
      cout << number1 << " % " << number2 << " = " << number1 % number2;
      cout << "\n\n9. Exit" << endl;
      cin >> aws;
      if (aws == 9) {
        system("cls");
        main();
      }
    default:
      if(operation != '+' || '-' || '*' || '/' || '%'){
        cout << "\nError! Enter a valid number and operation" << endl;
        system("pause");
      }

  }

}