#include <iostream>
#include <math.h>
#include "../components/calculator.h"
#include "../components/algebra.h"

using namespace std;

void arithmeticMean();
void weightingMean();
void triangleArea();
void squareArea();
void rightangleArea();
void diamondArea();
void trapezeArea();
void percentages();
void about();
void creator();
void gitHub();
void updates();
void possibility();
void angle();
void circle();

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


void triangleArea(){

  int c, base, height, awv, side;
  float operation, operationF;


  system("cls");
  cout << "Enter what number do you want!" << endl;
  cout << "1. Triangle Area" << endl;
  cout << "2. Isosceles Triangle Area" << endl;
  cout << "3. Equilateral Triangle Area" << endl;
  cout << "4. Right-Angle Triangle Area" << endl;
  cout << endl;
  cout << "9. Exit" << endl;
  cout << endl;
  cin >> c;

  switch (c) {
    case 1:
      system("cls");
      cout << "Enter base value!" << endl;
      cin >> base;
      cout << endl;
      cout << "Enter height value!" << endl;
      cin >> height;
      cout << endl;

      operation = base * height / 2;
      cout << "The result = " << operation << endl;
      cout << endl;
      cout << "9. Exit" << endl;
      cout << endl;
      cin >> awv;
      if (awv = 9){
        triangleArea();
      }

    case 2:
      system("cls");
      cout << "Enter base value!" << endl;
      cin >> base;
      cout << endl;
      cout << "Enter height value!" << endl;
      cin >> height;
      cout << endl;

      operation = base * height / 2;
      cout << "The result = " << operation << endl;
      cout << endl;
      cout << "9. Exit" << endl;
      cout << endl;
      cin >> awv;
      if (awv = 9){
        triangleArea();
      }
    case 3:
      system("cls");
      cout << "Enter side value" << endl;
      cin >> side;
      cout << endl;

      operation = side * side * sqrt(3) / 4;
      cout << "The result = " << operation << endl;

      cout << endl;
      cout << "9. Exit" << endl;
      cout << endl;
      cin >> awv;
      if (awv = 9){
        triangleArea();
      }

    case 4:
      int cat1, cat2;

      system("cls");
      cout << "Enter cathetus 1 value" << endl;
      cin >> cat1;
      cout << endl;
      cout << "Enter cathetus 2 value" << endl;
      cin >> cat2;
      cout << endl;

      operation = cat1 * cat2 / 2;
      cout << "The result = " << operation << endl;
      cout << endl;
      cout << "9. Exit" << endl;
      cout << endl;
      cin >> awv;
      if (awv = 9){
        triangleArea();
      }

    case 9:
      system("cls");
      main();
  }

}

void squareArea(){

  int side, operation, aws;
  system("cls");
  cout << "Enter side value" << endl;
  cin >> side;

  operation = side * side;
  cout << endl;
  cout << "The result = " << operation << endl;
  cout << endl;
  cout << "9. Exit" << endl;
  cin >> aws;
  switch (aws) {
    case 9:
      system("cls");
      main();
  }
}

void rightangleArea(){

  int side1, side2, aws, operation;

  system("cls");

  cout << "Enter short side value" << endl;
  cin >> side1;
  cout << endl;
  cout << "Enter long side value" << endl;
  cin >> side2;
  cout << endl;

  operation = side1 * side2;

  cout << "The result = " << operation << endl;
  cout << endl;
  cout << "9. Exit" << endl;
  cin >> aws;

  switch (aws) {
    case 9:
      system("cls");
      main();
  }

}

void diamondArea(){
  int diagonal1, diagonal2, aws, operation;

  system("cls");

  cout << "Enter first diagonal value" << endl;
  cin >> diagonal1;
  cout << endl;
  cout << "Enter second diagonal value" << endl;
  cin >> diagonal2;
  cout << endl;
  operation = diagonal1 * diagonal2 / 2;
  cout << "The result = " << operation << endl;
  cout << endl;
  cout << "9. Exit" << endl;
  cin >> aws;
  switch (aws) {
    case 9:
      system("cls");
      main();
  }
}

void trapezeArea(){
  int baseS, baseL, aws, height, operation;

  system("cls");

  cout << "Enter long base value" << endl;
  cin >> baseL;
  cout << endl;
  cout << "Enter short base value" << endl;
  cin >> baseS;
  cout << endl;
  cout << "Enter height value" << endl;
  cin >> height;
  cout << endl;

  operation = ((baseL + baseS) * height) / 2;

  cout << "The result = " << operation << endl;
  cout << endl;

  cout << "9. Exit" << endl;
  cin >> aws;

  switch (aws) {
    case 9:
      system("cls");
      main();
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



void about(){

  int aws;

  system("cls");

  cout << "This app was created for simplify calculation." << endl;
  cout << "Country of origin: Romania" << endl;
  cout << "Date of creation: September, 2022" << endl;
  cout << "Version: 2.3" << endl;
  cout << "Hours of work: 5-8 hours" << endl;
  cout << "Building ID: gfr78999fHiK0871" << endl;
  cout << "Version ID: 2.4400GH" << endl;
  cout << "URank: 0.738" << endl;
  cout << "Operation Result Prediction: above 9.03" << endl;
  cout << "Serial Number: fj3H4950" << endl;
  cout << endl;

  cout << "9. Exit" << endl;
  cin >> aws;

  switch (aws) {
    case 9:
      system("cls");
      main();
  }

}

void creator(){

  int aws;

  system("cls");

  cout << "Creator: H. Adelin" << endl;
  cout << "Age[when the application was created]: 14" << endl;
  cout << "Country of origion: Romania" << endl;
  cout << endl;
  cout << "9. Exit" << endl;
  cin >> aws;

  switch (aws) {
    case 9:
      system("cls");
      main();
  }

}

void gitHub(){

  int aws;

  system("cls");

  cout << "Link: github.com/HojdaAdelin" << endl;
  cout << endl;
  cout << "9. Exit" << endl;
  cin >> aws;

  switch (aws) {
    case 9:
      system("cls");
      main();
  }

}

void updates(){

  int aws;

  system("cls");

  cout << "Current version: 2.3" << endl;
  cout << "\nUpdate news: " << endl;
  cout << "\n-Change old exit to main menu\n-Source update\n-Sum of divisors\n-The square of a number" << endl;
  cout << "\n7. Link for updates" << endl;
  cout << "9. Exit" << endl;

  cin >> aws;

  switch (aws) {
    case 7:

      int aws1;

      cout << endl;
      cout << "Link: https://github.com/HojdaAdelin/Eleven-Terminal" << endl;
      cout << "\n9. Exit" << endl;
      cin >> aws1;

      if(aws1 = 9) {
        updates();
      }
    case 9:
      system("cls");
      main();
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

void angle() {

  int angle1, angle2, angle3, aws;
  string type;

  cout << "Enter first angle measure!" << endl;
  cin >> angle1;

  cout << "\nEnter second angle measure" << endl;
  cin >> angle2;

  angle3 = 180 - (angle1 + angle2);

  if (angle3 < 90){
    type = "type = sharp angle";
  } else if (angle3 > 90) {
    type = "type = obtuse angle";
  } else if (angle3 == 0) {
    type = "type = null angle";
  } else if (angle3 == 180) {
    type = "type = elongate angle";
  } else {
    type = "type = none";
  }

  cout << "\nThe result = " << angle3 << " and " << type << endl;
  system("pause");
}



void circle() {

  int r, aws;
  const double pi = 3.14;
  cout << "Enter the radius of the circle!" << endl;
  cin >> r;
  const double result = 2 * r * pi;

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
