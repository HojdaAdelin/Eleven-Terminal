#include <iostream>
#include "info.h"

using namespace std;

void about(){

  int aws;

  system("cls");

  cout << "This app was created for simplify calculation." << endl;
  cout << "Country of origin: Romania" << endl;
  cout << "Date of creation: September, 2022" << endl;
  cout << "Version: 2.5" << endl;
  cout << "Hours of work: 5-8 hours" << endl;
  cout << "Building ID: GRe78000fHiK0871" << endl;
  cout << "Version ID: 2.5400GP" << endl;
  cout << "URank: 0.739" << endl;
  cout << "Operation Result Prediction: above 9.05" << endl;
  cout << "Serial Number: Hj3H0050" << endl;
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

  cout << "Current version: 2.5" << endl;
  cout << "\nUpdate news: " << endl;
  cout << "\n-Source update\n-GCD\n-LCM" << endl;
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
