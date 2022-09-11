#include <iostream>
#include "algebra.h"

using namespace std;

void divisors() {

    int n, z, aws;

    cout << "Enter the number you want to know his divisors!" << endl;
    cin >> n;

    for(z=1; z <= n; z++){
        if(n % z == 0) {
            cout << "\nDivisor: " << z << endl;
        }

    }
    cout << "\n9.Exit" << endl;
    cin >> aws;

    if (aws == 9) {
        system("cls");
        main();
    } else {
        system("pause");
    }
}

void digit() {

  int n, result, aws;

  cout << "Enter the number!" << endl;
  cin >> n;

  result = n * (n + 1) / 2;

  cout << "\nThe result = " << result << endl;

  cout << "\n9. Exit" << endl;
  cin >> aws;

  if (aws == 9) {
    system("cls");
    main();
  } else {
    system("pause");
  }

}

void divisorssum() {
   int sum=0, aws, number, i;

   cout << "Enter the number!" << endl;
   cin >> number;

   for (i = 1; i <= number; i++) {
        if(number % i == 0) {
            sum += i;
        }
   }

    cout << "\nThe result = " << sum << endl;
    cout << "\n9. Exit" << endl;
    cin >> aws;

    if (aws == 9) {
        system("cls");
        main();
    }

}

void squarenumber() {
    int number, square, aws;

    cout << "Enter the number!" << endl;
    cin >> number;

    square = number * number;

    cout << "\nThe result = " << square << endl;

    cout << "\n9. Exit" << endl;
    cin >> aws;

    if (aws == 9) {
        system("cls");
        main();
    }
}