#include <iostream>
#include "info.h"

using namespace std;

void about(){

  int aws;

  system("cls");
  cout << "Eleven Terminal - About" << endl;
  cout << "\nThis app was created for simplify calculation." << endl;
  cout << "Country of origin: Romania" << endl;
  cout << "Date of creation: November, 2022" << endl;
  cout << "Version: 1.0.1" << endl;
  cout << "Hours of work: 16 hours" << endl;
  cout << "Building ID: iRe90996fHiK0871" << endl;
  cout << "Version ID: 2.5400GP" << endl;
  cout << "URank: 0.740" << endl;
  cout << "Operation Result Prediction: above 9.11" << endl;
  cout << "Serial Number: Hj3H0050" << endl;
  cout << endl;

  cout << "[9] Exit" << endl;
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
  cout << "Eleven Terminal - Creator" << endl;
  cout << "\nCreator: H. Adelin" << endl;
  cout << "Age[when the application was created]: 14" << endl;
  cout << "Country of origion: Romania" << endl;
  cout << endl;
  cout << "[9] Exit" << endl;
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
  cout << "Eleven Terminal - GitHub" << endl;
  cout << "\nLink: github.com/HojdaAdelin" << endl;
  cout << endl;
  cout << "[9] Exit" << endl;
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
  cout << "Eleven Terminal - Updates" << endl;
  cout << "Current version: 1.0.1" << endl;
  cout << "\nUpdate news: " << endl;
  cout << "\n-Major Menu change\n-Update link changed" << endl;
  cout << "\n[7] Link for updates" << endl;
  cout << "[9] Exit" << endl;

  cin >> aws;

  switch (aws) {
    case 7:

      int aws1;

      cout << endl;
      cout << "Link: https://github.com/HojdaAdelin/Eleven-Terminal/releases" << endl;
      cout << "\n[9] Exit" << endl;
      cin >> aws1;

      if(aws1 = 9) {
        updates();
      }
    case 9:
      system("cls");
      main();
  }

}

void tutorials() {
  
  int aws;
  
  cout << "Eleven Terminal - Tutorials" << endl;
  cout << "There is nothing here for now." << endl;
  cout << "\n[9] Exit" << endl;
  cin >> aws;
  if (aws == 9) {
    system("cls");
    main();
  }

}

void info(){
  int aws, choose;
  cout << "Eleven Terminal - Info" << endl;
  cout << "In this section you can view how Eleven Terminal function work" << endl;
  cout << "\n[1] Clasic calculator" << endl;
  cout << "[2] Algebra calculator" << endl;
  cout << "[3] Geometric area" << endl;
  cout << "[4] Percent calculation" << endl;
  cout << "[5] Geometry calculation" << endl;
  cin >> choose;

  switch (choose)
  {
  case 1:
    system("cls");
    cout << "Clasic calculator is a normal calculator with basic functionality were you can calculate simple expresions." << endl;
    cout << "Clasic calculator don't have more functions, but have the most important." << endl;
    cout << "\n[8] Menu" << endl;
    cout << "[9] Exit" << endl;
    cin >> aws;

    if (aws == 8) {
      system("cls");
      info();

    } else if (aws == 9) {
      system("cls");
      main();
    }
    break;
  case 2:
    system("cls");
    cout << "Algebra calculator have a lot of functionality." << endl;
    cout << "Here you can calculate more than you expected." << endl;
    cout << "To use it you only need to enter the number of funtion you need and start using it." << endl;
    cout << "\n[8] Menu" << endl;
    cout << "[9] Exit" << endl;
    cin >> aws;

    if (aws == 8) {
      system("cls");
      info();

    } else if (aws == 9) {
      system("cls");
      main();
    }
    break;
  case 3:
    system("cls");
    cout << "Geometric area is basically a simple functionality used for find areas." << endl;
    cout << "It's simple to use and very fast to find you want" << endl;
    cout << "To use it you only need to enter the number of function you want and follow the steps on function." << endl;
    cout << "\n[8] Menu" << endl;
    cout << "[9] Exit" << endl;
    cin >> aws;

    if (aws == 8) {
      system("cls");
      info();

    } else if (aws == 9) {
      system("cls");
      main();
    }
    break;
  case 4:
    system("cls");
    cout << "Percent calculation is a simple function were you can find percentages of a number." << endl;
    cout << "You need to select the function you want and find the answer." << endl;
    cout << "\n[8] Menu" << endl;
    cout << "[9] Exit" << endl;
    cin >> aws;

    if (aws == 8) {
      system("cls");
      info();

    } else if (aws == 9) {
      system("cls");
      main();
    }
    break;
  case 5:
    system("cls");
    cout << "Geometry calculation is a small function were you can find geometry calculations." << endl;
    cout << "To use it you need to follow the steps on the functions" << endl;
    cout << "\n[8] Menu" << endl;
    cout << "[9] Exit" << endl;
    cin >> aws;

    if (aws == 8) {
      system("cls");
      info();

    } else if (aws == 9) {
      system("cls");
      main();
    }
    
    break;
  default:
    system("cls");
    info();
    break;
  }
}
