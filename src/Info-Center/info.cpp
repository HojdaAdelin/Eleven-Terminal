#include <iostream>
#include "info.h"
#include "../Generator/include.h"

using namespace std;

void creator(){
  string git = "https://github.com/HojdaAdelin";
  int aws;

  system("cls");
  cout << "Eleven Terminal - About Application" << endl;
  cout << "\nThis app was created for simplify calculation." << endl;
  cout << "Creator: H. Adelin" << endl;
  cout << "Country of origin: Romania" << endl;
  cout << "Date of creation: November, 2022" << endl;
  cout << "Version: 2.5" << endl;
  cout << "Hours of work: 88 hours" << endl;
  cout << "Building ID: "; ID_procces();
  cout << "Version ID: 2.0GX" << endl;
  cout << "URank: 0.820" << endl;
  cout << "Operation Result Prediction: above 9.33" << endl;
  cout << "Serial Number: "; SERIAL_procces();
  cout << endl;
  cout << endl;
  cout << "Eleven Terminal - Creator github" << endl;
  cout << "\nLink: github.com/HojdaAdelin" << endl;
  cout << endl;
  cout << "[8] Open github" << endl;
  cout << "[9] Exit" << endl;
  cin >> aws;

  switch (aws) {
    case 9:
      system("cls");
      main();
    case 8:
      system(string("start " + git).c_str());
      system("cls");
      creator();
  }

}

void updates(){

  int aws;
  string update = "https://github.com/HojdaAdelin/Eleven-Terminal/releases";
  string bugs = "https://github.com/HojdaAdelin/Eleven-Terminal/issues";
  string contributor = "https://github.com/HojdaAdelin/Eleven-Terminal/pulls";
  system("cls");
  cout << "Eleven Terminal - Updates" << endl;
  cout << "Current version: 2.5" << endl;
  cout << "\nUpdate news: " << endl;
  cout << "\n-About rewrited\n-Major Simple-Calculator update\n-Heron method\n-Grade 2 equation\n-Source update\n-Icon when build\n-G++ rework\n-Menu update" << endl;
  cout << "\n[6] Open contribution" << endl;
  cout << "[7] Open updates" << endl;
  cout << "[8] Open bugs report" << endl;
  cout << "[9] Exit" << endl;

  cin >> aws;

  switch (aws) {
    case 7:

      system(string("start " + update).c_str());
      system("cls");
      updates();
      break;
    case 9:
      system("cls");
      main();
      break;
    case 6:
      system(string("start " + contributor).c_str());
      system("cls");
      updates();
      break;
   case 8:

      system(string("start " + bugs).c_str());
      system("cls");
      updates();
      break;
}
}

void tutorials() {
  
  int aws;
  
  cout << "Eleven Terminal - Tutorials" << endl;
  
  cout << "\n1. Eleven Terminal - Calculator ex: 2+2; 4*120" << endl;
  cout << "2. Eleven Terminal - Algebra calculations ex:\n-1+2+3+...+50\n-2+4/2\n-SQRT(2*10)" << endl;


  cout << "\n[9] Exit" << endl;
  cin >> aws;
  if (aws == 9) {
    system("cls");
    main();
  }

}

void info(){
  int aws, choose;
  cout << "Eleven Terminal - Categories Info" << endl;
  cout << "In this section you can view how Eleven Terminal function work" << endl;
  cout << "\n[1] Clasic calculator" << endl;
  cout << "[2] Algebra calculator" << endl;
  cout << "[3] Geometric area" << endl;
  cout << "[4] Percent calculation" << endl;
  cout << "[5] Geometry calculation" << endl;
  cout << "[6] Dev" << endl;
  cout << "[7] Config utility" << endl;
  cout << "[8] Commands" << endl;
  cout << "\n[9] Exit" << endl;
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

  
  case 6:
    system("cls");
    cout << "To see the dev code inside the app just type 'dev' in the main menu" << endl;
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
  case 7:
    system("cls");
    cout << "Config files need to be in the same directory whit the executable." << endl;
    cout << "Thoose .cfg files work along whit Fstream library." << endl;
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
  
  case 8:
    system("cls");
    cout << "1. exit        Exit the application" << endl;
    cout << "2. clear       Clear used terminal" << endl;
    cout << "3. help        Help center" << endl;
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
  case 9:
    system("cls");
    main();
    break;
  default:
    system("cls");
    info();
    break;
  }
}
