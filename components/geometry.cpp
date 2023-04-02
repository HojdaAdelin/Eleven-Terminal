#include <iostream>
#include "geometry.h"
#include <math.h>
using namespace std;


void triangleArea(){

  int c, base, height, awv, side;
  float operation, operationF;


  system("cls");
  cout << "Eleven Terminal - Triangle Area" << endl;
  cout << "Enter what number do you want!" << endl;
  cout << "\n[1] Triangle Area" << endl;
  cout << "[2] Isosceles Triangle Area" << endl;
  cout << "[3] Equilateral Triangle Area" << endl;
  cout << "[4] Right-Angle Triangle Area" << endl;
  cout << endl;
  cout << "[9] Exit" << endl;
  cout << endl;
  cin >> c;

  switch (c) {
    case 1:
      system("cls");
      
      cout << "\nEnter base value!" << endl;
      cin >> base;
      cout << endl;
      cout << "Enter height value!" << endl;
      cin >> height;
      cout << endl;

      operation = base * height / 2;
      cout << "The result = " << operation << endl;
      
      cout << "\n[9] Exit" << endl;
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
      cout << "[9] Exit" << endl;
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
      cout << "[9] Exit" << endl;
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
      cout << "[9] Exit" << endl;
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
  cout << "Eleven Terminal - Square Area" << endl;
  cout << "\nEnter side value" << endl;
  cin >> side;

  operation = side * side;
  cout << endl;
  cout << "The result = " << operation << endl;
  
  cout << "\n[8] Retry" << endl;
  cout << "[9] Exit" << endl;
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
  cout << "Eleven Terminal - Rightangle Area" << endl;
  cout << "\nEnter short side value" << endl;
  cin >> side1;
  cout << endl;
  cout << "Enter long side value" << endl;
  cin >> side2;
  cout << endl;

  operation = side1 * side2;

  cout << "The result = " << operation << endl;
  cout << "\n[8] Retry" << endl;
  cout << "[9] Exit" << endl;
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
  cout << "Eleven Terminal - Diamond Area" << endl;
  cout << "Enter first diagonal value" << endl;
  cin >> diagonal1;
  cout << endl;
  cout << "Enter second diagonal value" << endl;
  cin >> diagonal2;
  cout << endl;
  operation = diagonal1 * diagonal2 / 2;
  cout << "The result = " << operation << endl;
  cout << "\n[8] Retry" << endl;
  cout << "[9] Exit" << endl;
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
  cout << "Eleven Terminal - Trapeze Area" << endl;
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
  cout << "\n[8] Retry" << endl;
  cout << "[9] Exit" << endl;
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
  cout << "Eleven Terminal - Angle" << endl;
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
  
  cout << "\n[8] Retry" << endl;
  cout << "[9] Exit" << endl;
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
  cout << "Eleven Terminal - Circle Area" << endl;
  cout << "Enter the radius of the circle!" << endl;
  cin >> r;
  const double result = r * r * pi;

  cout << "\nThe result = " << result << endl;

  cout << "\n[8] Retry" << endl;
  cout << "[9] Exit" << endl;
  cin >> aws;
  if (aws == 9) {
    system("cls");
    main();
  } else if(aws == 8) {
    system("cls");
    circle();
  }
}

void t30() {

  int vall = 2;
  int hy, side;
  int aws;

  cout << "Eleven Terminal - 30 angle theorem" << endl;
  cout << "\nEnter hypotenuse value" << endl;
  cin >> hy;

  side = hy / vall;

  cout << "\nThe side opposed to the 30 angle is " << side << endl;
  cout << "\n[8] Retry" << endl;
  cout << "[9] Exit" << endl;

  cin >> aws;

  if (aws == 8) {
      system("cls");
      t30();
  } else if (aws == 9) {
      system("cls");
      main();

  }
}

void heightTheoreme() {

  int side1, side2, hy;
  int aws;
  string hg;

  cout << "Eleven Terminal - Height Theoreme" << endl;
  cout << "\nEnter side1 and side2 of the triangle" << endl;
  cin >> side1 >> side2;
  cout << "\nEnter the hypotenuse value" << endl;
  cin >> hy;

  hg = (side1 * side2) / hy;

  cout << "\nThe height is " << hg << endl;
  cout << "\n[8] Retry" << endl;
  cout << "[9] Exit" << endl;
  cin >> aws;

  if (aws == 8) {
    system("cls");
    heightTheoreme();
  } else if (aws == 9) {
    system("cls");
    main();
  }


}

void Pythagoras() {

  float side1, side2, hy;
  int aws, ch;
  cout << "Eleven Terminal - Pythagoras theorem" << endl;

  cout << "\n[1] For side" << endl;
  cout << "[2] For hypotenuse" << endl;
  cin >> ch;

  if (ch == 1) {
    system("cls");
    cout << "Enter the 2nd side value" << endl;
    cin >> side2;

    cout << "\nEnter the hypotenuse value" << endl;
    cin >> hy;

    side1 = sqrt((hy*hy) - (side2*side2));

    cout << "\nThe side value is " << side1 << endl;
    cout << "\n[8] Retry" << endl;
    cout << "[9] Exit" << endl;

    cin >> aws;

    if (aws == 8) {
      system("cls");
      Pythagoras();
    } else if (aws == 9) {
      system("cls");
      main();
    }

  } else if (ch == 2) {

    system("cls");
    cout << "Enter the side1 and side2 value" << endl;
    cin >> side1 >> side2;

    hy = sqrt((side1*side1) + (side2*side2));

    cout << "\nThe hypotenuse value is " << hy << endl;
    cout << "\n[8] Retry" << endl;
    cout << "[9] Exit" << endl;

    cin >> aws;

    if (aws == 8) {
      system("cls");
      Pythagoras();
    } else if (aws == 9) {
      system("cls");
      main();
    }

  }



}

void side() {

  int pr, aws, sideC, hy;

  cout << "Eleven Terminal - Side theorem" << endl;
  cout << "\nEnter the proiection of the side value" << endl;
  cin >> pr;
  cout << "\nEnter the hypotenuse value" << endl;
  cin >> hy;

  sideC = sqrt(pr * hy);

  cout << "\nThe side value = " << sideC << endl;
  cout << "\n[8] Retry" << endl;
  cout << "[9] Exit" << endl;

  cin >> aws;

  if (aws == 8) {
    system("cls");
    side();
  } else if (aws == 9) {
    system("cls");
    main();
  }
  

}