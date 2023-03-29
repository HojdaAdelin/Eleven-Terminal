#include <iostream>
#include "algebra.h"
#include <math.h>

using namespace std;

void divisors() {

    int n, z, aws;
    cout << "Eleven Terminal - Divisors" << endl;
    cout << "\nEnter the number you want to know his divisors!" << endl;
    cin >> n;

    for(z=1; z <= n; z++){
        if(n % z == 0) {
            cout << "\nDivisor: " << z << endl;
        }

    }
    
    cout << "\n[8] Retry" << endl;
    cout << "[9] Exit" << endl;
    cin >> aws;

    if (aws == 9) {
        system("cls");
        main();
    } else if(aws == 8){
        system("cls");
        divisors();
    } 
}

void digit() {

  int n, result, aws;
  cout << "Eleven Terminal - Digit" << endl;
  cout << "\nEnter the number!" << endl;
  cin >> n;

  result = n * (n + 1) / 2;

  cout << "\nThe result = " << result << endl;

  cout << "\n[8] Retry" << endl;
  cout << "[9] Exit" << endl;
  cin >> aws;

  if (aws == 9) {
    system("cls");
    main();
  } else if(aws == 8){
    system("cls");
    digit();
  }

}

void divisorssum() {
   int sum=0, aws, number, i;
   cout << "Eleven Terminal - Sum of Divisors" << endl; 
   cout << "\nEnter the number!" << endl;
   cin >> number;

   for (i = 1; i <= number; i++) {
        if(number % i == 0) {
            sum += i;
        }
   }

    cout << "\nThe result = " << sum << endl;
    cout << "\n[8] Retry" << endl;
    cout << "[9] Exit" << endl;
    cin >> aws;

    if (aws == 9) {
        system("cls");
        main();
    } else if(aws == 8) {
      system("cls");
      divisorssum();
    }

}

void squarenumber() {
    int number, square, aws;
    cout << "Eleven Terminal - Square Number" << endl;
    cout << "\nEnter the number!" << endl;
    cin >> number;

    square = number * number;

    cout << "\nThe result = " << square << endl;

    cout << "\n[8] Retry" << endl;
    cout << "[9] Exit" << endl;
    cin >> aws;

    if (aws == 9) {
        system("cls");
        main();
    } else if(aws == 8) {
      system("cls");
      squarenumber();
    }
}

void arithmeticMean() {

  int n, i, x;
  float arr[50], sum=0, armean;

  system("cls");
  cout << "Eleven Terminal - Arithmetic Mean" << endl;
  cout << "\nHow many numbers do you want to enter?" << endl;
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

  cout << "\n[8] Retry" << endl;
  cout << "[9] Exit" << endl;

  cout << endl;

  cin >> x;

  switch(x) {
    case 8:
      system("cls");
      arithmeticMean();

    case 9:
     system("cls");
     main();

}
}



void weightingMean(){
  int aws, num1, num2, pon1, pon2, operation, sumary;
  double operation2;
  cout << "Eleven Terminal - Weighting Mean" << endl;
  cout << "\nEnter 2 numbers!" << endl;
  cin >> num1 >> num2;
  cout << "\nEnter first weighting and the second!" << endl;
  cin >> pon1 >> pon2;

  operation = num1 * pon1 + num2 * pon2;
  sumary = pon1 + pon2;
  operation2 = operation / sumary;
  cout << "\nWeighting result = " << operation2 << endl;
  cout << "\n[8] Retry" << endl;
  cout << "[9] Exit" << endl;
  cin >> aws;

  if(aws == 9){
    system("cls");
    main();
  } else if(aws == 8){
    system("cls");
    weightingMean();
  }
}

void percentages() {

  int number, choose, percentage, aws, result;
  float operation;
  cout << "Eleven Terminal - Percentages" << endl;
  cout << "\n[1] The result of the percentage of a number" << endl;
  cout << "[2] Number from a result of a percentage" << endl;
  cin >> choose;

  if (choose == 1) {

    system("cls");

    cout << "Enter the number!" << endl;
    cin >> number;
    cout << "\nEnter the percentage of the number!" << endl;
    cin >> percentage;

    operation = percentage % number;

    cout << "\nThe result = " << operation << endl;
    cout << "\n[8] Retry" << endl;
    cout << "[9] Exit" << endl;
    cin >> aws;

    if (aws == 9) {
      system("cls");
      main();
    } else if(aws == 8){
      system("cls");
      percentages();
    }
  } else if (choose == 2) {

    system("cls");

    cout << "Enter the result!" << endl;
    cin >> result;

    cout << "\nEnter the percentage!" << endl;
    cin >> percentage;

    number = result * 100 / percentage;

    cout << "\nThe number = " << number << endl;

    cout << "\n[8] Retry" << endl;
    cout << "[9] Exit" << endl;
    cin >> aws;

    if (aws == 9) {
      system("cls");
      main();

    } else if(aws == 8){
      system("cls");
      percentages();
    }

  }



}

void possibility() {

  int operation1, operation2, favorableCases, possibleCases, aws;
  cout << "Eleven Terminal - Possibility" << endl;
  cout << "\nEnter Favorable cases!" <<  endl;
  cin >> favorableCases;

  cout << "\nEnter Possible cases!" << endl;
  cin >> possibleCases;

  operation1 = 100 / possibleCases;
  operation2 = operation1 * favorableCases;

  cout << "\nThe result = " << favorableCases << "/" << possibleCases << " or " << operation2 << "%" << endl;

  cout << "\n[8] Retry" << endl;
  cout << "[9] Exit" << endl;
  cin >> aws;

  if (aws == 9){
    system("cls");
    main();
  } else if(aws == 8){
    system("cls");
    possibility();
  }

}

void factor() {
  int number1, number2, aws, factor1;
  cout << "Eleven Terminal - Factor" << endl;
  cout << "\nEnter two numbers!" << endl;
  cin >> number1 >> number2;

  if (number2 > number1) {
      int temp = number2;
      number2 = number1;
      number1 = temp;
  }

  for (int i = 1; i <= number2; i++) {
      if(number1 % i == 0 && number2 % i == 0) {
        factor1 = i;
      }
  }

  cout << "\nThe GCD is " << factor1 << endl;
  cout << "\n[8] Retry" << endl;
  cout << "[9] Exit" << endl;
  cin >> aws;
  if (aws == 9) {
    system("cls");
    main();
  } else if(aws == 8) {
    system("cls");
    factor();
  }

}

void multiple() {
  int number1, number2, aws, multiple1;
  cout << "Eleven Terminal - Multiple" << endl;
  cout << "\nEnter two numbers!" << endl;
  cin >> number1 >> number2;

  if (number1 > number2) {
    multiple1 = number1;
  } else {
    multiple1 = number2;
  }

  while(1) {

    if (multiple1 % number1 == 0 && multiple1 % number2 == 0) {
      cout << "\nThe LCM is " << multiple1 << endl;
      break;
    }

    multiple1++;

  }

  cout << "\n[8] Retry" << endl;
  cout << "[9] Exit" << endl;
  cin >> aws;

  if (aws == 9) {
    system("cls");
    main();
  } else if(aws == 8) {
    system("cls");
    multiple();
  }

}

void geomean() {

  int a, b, result, aws;
  cout << "Eleven Terminal - Geometric mean" << endl;
  cout << "\nEnter the first number" << endl;
  cin >> a;

  cout << "\nEnter the second number" << endl;
  cin >> b;

  result = sqrt(a*b);
  cout << "\nThe result = " << result << endl;
  cout << "\n[8] Retry" << endl;
  cout << "[9] Exit" << endl;
  cin >> aws;

  if (aws == 9) {
    system("cls");
    main();
  } else if(aws == 8) {
    system("cls");
    geomean();
  }
}

void oddeven() {

  int number, aws;
  string type;
  cout << "Eleven Terminal - Number type" << endl;
  cout << "\nEnter a number" << endl;
  cin >> number;

  if (number % 2 == 0) {
    type = "even";
    
  } else {
    type = "odd";

  }

  cout << "\nThe number is " << type << endl;
  cout << "\n[8] Retry" << endl;
  cout << "[9] Exit" << endl;
  cin >> aws;
  
  if (aws == 9) {
    system("cls");
    main();
  } else if(aws == 8) {
    system("cls");
    oddeven();
  }

}

void Gauss(){

  int main_num, process, aw;

  cout << "Eleven Terminal - Gauss sum" << endl;
  cout << "Rule: This work only for 1+2+3+...+X (x = random number)" << endl;

  cout << "\nEnter the last number from row" << endl;
  cin >> main_num;
  process = (main_num * (main_num + 1)) / 2;

  cout << "\nThe sum = " << process << endl;
  cout << "\n[8] Retry" << endl;
  cout << "[9] Exit" << endl;
  cin >> aw;
  if (aw == 8){

    system("cls");
    Gauss();

  } else if (aw == 9) {

    system("cls");
    main();

  }
}