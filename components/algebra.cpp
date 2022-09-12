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

void arithmeticMean() {

  int n, i, x;
  float arr[50], sum=0, armean;

  system("cls");

  cout << "How many numbers do you want to enter?" << endl;
  cin >> n;
  cout << endl;
  cout << "\nEnter " << n << " numbers!" << endl;

  for ( i = 0; i < n; i++) {
    cin >> arr[i];
    sum = sum + arr[i];
  }

  armean = sum/n;
  cout << endl;
  cout << "\nThe result = " << armean << endl;
  cout << endl;

  cout << "9. Exit" << endl;

  cout << endl;

  cin >> x;

  switch(x) {
    case 9:
     system("cls");
     main();

}
}



void weightingMean(){
  int aws, num1, num2, pon1, pon2, operation, sumary;
  double operation2;

  cout << "Enter 2 numbers!" << endl;
  cin >> num1 >> num2;
  cout << "\nEnter first weighting and the second!" << endl;
  cin >> pon1 >> pon2;

  operation = num1 * pon1 + num2 * pon2;
  sumary = pon1 + pon2;
  operation2 = operation / sumary;
  cout << "\nWeighting result = " << operation2 << endl;
  cout << "\n9. Exit" << endl;
  cin >> aws;
  if(aws == 9){
    system("cls");
    main();
  } else {
    system("pause");
  }
}

void percentages() {

  int number, choose, percentage, aws, result;
  float operation;
  cout << "1. The result of the percentage of a number" << endl;
  cout << "2. Number from a result of a percentage" << endl;
  cin >> choose;

  if (choose == 1) {

    system("cls");

    cout << "Enter the number!" << endl;
    cin >> number;
    cout << "\nEnter the percentage of the number!" << endl;
    cin >> percentage;

    operation = percentage % number;

    cout << "\nThe result = " << operation << endl;
    cout << "\n9. Exit" << endl;
    cin >> aws;

    if (aws == 9) {
      system("cls");
      main();
    } else {
      system("pause");
    }
  } else if (choose == 2) {

    system("cls");

    cout << "Enter the result!" << endl;
    cin >> result;

    cout << "\nEnter the percentage!" << endl;
    cin >> percentage;

    number = result * 100 / percentage;

    cout << "\nThe number = " << number << endl;

    cout << "\n9. Exit" << endl;
    cin >> aws;

    if (aws == 9) {
      system("cls");
      main();

    } else {
      system("pause");
    }

  }



}

void possibility() {

  int operation1, operation2, favorableCases, possibleCases, aws;

  cout << "Enter Favorable cases!" <<  endl;
  cin >> favorableCases;

  cout << "\nEnter Possible cases!" << endl;
  cin >> possibleCases;

  operation1 = 100 / possibleCases;
  operation2 = operation1 * favorableCases;

  cout << "\nThe result = " << favorableCases << "/" << possibleCases << " or " << operation2 << "%" << endl;

  cout << "\n9. Exit" << endl;
  cin >> aws;

  if (aws == 9){
    system("cls");
    main();
  } else {
    system("pause");
  }

}

void factor() {
  int number1, number2, aws, factor;

  cout << "Enter two numbers!" << endl;
  cin >> number1 >> number2;

  if (number2 > number1) {
      int temp = number2;
      number2 = number1;
      number1 = temp;
  }

  for (int i = 1; i <= number2; i++) {
      if(number1 % i == 0 && number2 % i == 0) {
        factor = i;
      }
  }

  cout << "\nThe GCD is " << factor << endl;
  cout << "\n9. Exit" << endl;
  cin >> aws;
  if (aws == 9) {
    system("cls");
    main();
  }

}

void multiple() {
  int number1, number2, aws, multiple;

  cout << "Enter two numbers!" << endl;
  cin >> number1 >> number2;

  if (number1 > number2) {
    multiple = number1;
  } else {
    multiple = number2;
  }

  while(1) {

    if (multiple % number1 == 0 && multiple % number2 == 0) {
      cout << "\nThe LCM is " << multiple << endl;
      break;
    }

    multiple++;

  }

  cout << "\n9. Exit" << endl;
  cin >> aws;

  if (aws == 9) {
    system("cls");
    main();
  }

}