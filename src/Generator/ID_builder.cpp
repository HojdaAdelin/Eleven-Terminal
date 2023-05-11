#include <iostream>
#include "include.h"



using namespace std;
const int ch_MAX = 61;
string RandomString(int ch)

{
    char alpha[ch_MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D',
                          'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                          'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                          'V', 'W', 'X', 'Y', 'Z', '1', '2', '3',
                          '4', '5', '6', '7', '8', '9'};

    string result = "";
    for (int i = 0; i<ch; i++)
        result = result + alpha[rand() % ch_MAX];

    return result;
}

void ID_procces()
{
   srand(time(NULL));
   int ch = 16;
   cout<<RandomString(ch) <<"\n";
   
}

