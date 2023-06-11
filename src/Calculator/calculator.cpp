#include <iostream>
#include "calculator.h"
#include <vector>
#include <string>

using namespace std;

void simpleCalculator() {
  
  int aws;
  float num, sum;
  string op;
  vector<float> number;
  cout << "Enter numbers(with space, use '-0' to stop): ";
  while (cin >> num && num !=-0) {
    number.push_back(num);
  }

  cout << "\n\nEnter the operator(+ , - , * , /):" << endl;
  cin >> op;

  if (op == "+") {
    for (int i = 0; i < number.size(); i++) {
      sum += number[i];
    }
  } else if (op == "-") {
    sum = number[0];
    for (int i = 1; i < number.size(); i++) {
      sum -= number[i];
    }
  } else if (op == "*") {
    sum = 1;
    for (int i = 0; i < number.size(); i++) {
      sum *= number[i];
    }
  } else if (op == "/") {
    sum = number[0];
    for (int i = 1; i < number.size(); i++) {
      sum /= number[i];
    }
  }
  cout << "\nThe result is " << sum << endl;
  cout << "\n[8] Retry" << endl;
  cout << "[9] Exit" << endl;
  cin >> aws;

  if (aws == 8) {
    system("cls");
    simpleCalculator();
  } else if (aws == 9) {
    system("cls");
    main();
  } else {
    cout << "Wrong termen" << endl;
    simpleCalculator();
  }

}