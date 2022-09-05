#include <iostream>
#include <math.h>

using namespace std;

  // INDEX FUNCTIONS

  void nationalEvaluation();
  void arithmeticMean();
  void triangleArea();
  void squareArea();
  void rightangleArea();
  void diamondArea();
  void trapezeArea();
  void about();
  void creator();
  void gitHub();
  void updates();



  int main() {

    int n;

    cout << "Welcome to Eleven Terminal!" << endl;
    cout << "Please enter what number do you want!" << endl;
    cout << endl;

    cout << "1. National Evaluation [Romania]" << endl;
    cout << "2. Arithmetic Mean" << endl;
    cout << "3. Triangle Area" << endl;
    cout << "4. Square Area" << endl;
    cout << "5. Right angle Area" << endl;
    cout << "6. Diamond Area" << endl;
    cout << "7. Trapeze Area" << endl;
    cout << endl;

    cout << "8. About 'Eleven Terminal'" << endl;
    cout << "9. Creator" << endl;
    cout << "10. GitHub" << endl;
    cout << "11. Check for updates" << endl;

    cout << endl;
    cin >> n;

    switch (n) {
      case 1:
        nationalEvaluation();
      case 2:
        arithmeticMean();
      case 3:
        triangleArea();
      case 4:
        squareArea();
      case 5:
        rightangleArea();
      case 6:
        diamondArea();
      case 7:
        trapezeArea();
      case 8:
        about();
      case 9:
        creator();
      case 10:
        gitHub();
      case 11:
        updates();


    }

    return 0;
  }



// FUNCTIONS


void nationalEvaluation() {


 int n, i, x;
 float sum2, sum1, result_mean, arr[50], sum=0;
 system("cls");

 cout << "Enter 5-8 result!" << endl;
 cin >> sum2;

 cout << endl;

 cout << "How many EN exams do you have?" << endl;
 cin >> n;

 cout << endl;

 cout << "Enter " << n << " results!" << endl;

 for(i = 0; i < n; i++){
   cin >> arr[i];
   sum = sum+arr[i];
 }

 sum1 = sum/n;
 result_mean = (20*sum2 + 80*sum1) / 100;

 cout << endl;

 cout << "Your EN result = " << result_mean << endl;
 cout << endl;
 //cout << endl;
 cout << "8. Go back to menu" << endl;
 //cout << "9. Exit" << endl;
 cout << endl;
 cin >> x;

 switch(x) {
   case 8:
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

  cout << "8. Go back to menu" << endl;
  //cout << "9. Exit" << endl;
  cout << endl;

  cin >> x;

  switch(x) {
    case 8:
     system("cls");
     main();

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
  cout << "8. Go back to menu" << endl;
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

    case 8:
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
  cout << "8. Go back to menu" << endl;
  cin >> aws;
  switch (aws) {
    case 8:
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
  cout << "8. Go back to menu" << endl;
  cin >> aws;

  switch (aws) {
    case 8:
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
  cout << "8. Go back to menu" << endl;
  cin >> aws;
  switch (aws) {
    case 8:
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

  cout << "8. Go back to menu" << endl;
  cin >> aws;

  switch (aws) {
    case 8:
      system("cls");
      main();
  }

}

void about(){

  int aws;

  system("cls");

  cout << "This app was created for simplify calculation area of geometric objects." << endl;
  cout << "Country of origin: Romania" << endl;
  cout << "Date of creation: July, 2022" << endl;
  cout << "Version: 1.0" << endl;
  cout << "Hours of work: 4-6 hours" << endl;
  cout << "Building ID: fH2345556900HJ27" << endl;
  cout << "Version ID: 1.4400" << endl;
  cout << "URank: 0.733" << endl;
  cout << "Operation Result Prediction: above 9" << endl;
  cout << "Serial Number: fj3H4558" << endl;
  cout << endl;

  cout << "8. Go back to menu" << endl;
  cin >> aws;

  switch (aws) {
    case 8:
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
  cout << "8. Go back to menu" << endl;
  cin >> aws;

  switch (aws) {
    case 8:
      system("cls");
      main();
  }

}

void gitHub(){

  int aws;

  system("cls");

  cout << "Link: github.com/HojdaAdelin" << endl;
  cout << endl;
  cout << "8. Go back to menu" << endl;
  cin >> aws;

  switch (aws) {
    case 8:
      system("cls");
      main();
  }

}

void updates(){

  int aws;

  system("cls");

  cout << "Current version: 1.0" << endl;
  cout << endl;
  cout << "7. Link for updates" << endl;
  cout << "8. Go back to menu" << endl;

  cin >> aws;

  switch (aws) {
    case 7:

      int aws1;

      cout << endl;
      cout << "Link: github.com/HojdaAdelin?tab=projects&type=new" << endl;
      cout << "9. Exit" << endl;
      cin >> aws1;

      if(aws1 = 9) {
        updates();
      }
    case 8:
      system("cls");
      main();
  }

}
