#include <iostream>
#include "geometry.h"
#include <math.h>
using namespace std;


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
      
      cout << "\n9. Exit" << endl;
      cout << endl;
      cin >> awv;
      if (awv == 9){
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
  
  cout << "\n8. Retry" << endl;
  cout << "9. Exit" << endl;
  cin >> aws;
  if (aws == 9) {
    system("cls");
    main();
  } else if(aws == 8) {
    system("cls");
    squareArea();
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
  cout << "\n8. Retry" << endl;
  cout << "9. Exit" << endl;
  cin >> aws;
  if (aws == 9) {
    system("cls");
    main();
  } else if(aws == 8) {
    system("cls");
    rightangleArea();
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
  cout << "\n8. Retry" << endl;
  cout << "9. Exit" << endl;
  cin >> aws;
  if (aws == 9) {
    system("cls");
    main();
  } else if(aws == 8) {
    system("cls");
    diamondArea();
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
  cout << "\n8. Retry" << endl;
  cout << "9. Exit" << endl;
  cin >> aws;
  if (aws == 9) {
    system("cls");
    main();
  } else if(aws == 8) {
    system("cls");
    trapezeArea();
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
  } else if (angle3 > 90 && angle3 < 180) {
    type = "type = obtuse angle";
  } else if (angle3 <= 0) {
    type = "type = null angle";
  } else if(angle3 > 89 && angle3 < 91){
    type = "type = right angle";
  }
    else if (angle3 >= 180) {
    type = "type = elongate angle";
  } else {
    type = "type = none";
  }

  cout << "\nThe result = " << angle3 << " and " << type << endl;
  
  cout << "\n8. Retry" << endl;
  cout << "9. Exit" << endl;
  cin >> aws;
  if (aws == 9) {
    system("cls");
    main();
  } else if(aws == 8) {
    system("cls");
    angle();
  }
}



void circle() {

  int r, aws;
  const double pi = 3.14;
  cout << "Enter the radius of the circle!" << endl;
  cin >> r;
  const double result = 2 * r * pi;

  cout << "\nThe result = " << result << endl;

  cout << "\n8. Retry" << endl;
  cout << "9. Exit" << endl;
  cin >> aws;
  if (aws == 9) {
    system("cls");
    main();
  } else if(aws == 8) {
    system("cls");
    circle();
  }
}
