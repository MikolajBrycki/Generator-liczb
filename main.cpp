#include <ctime>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
using namespace std;

int iLiczba;

int main()
{

cout << "   GENERATOR LICZB LOSOWYCH     " << endl;
cout << "--------------------------------" << endl;
cout << endl;


srand((int)time(NULL));
cout << "Wylosowana liczba to: ";
iLiczba = rand() % 33;
cout << iLiczba;
cout<< " "<<endl;
cout<< " "<<endl;
return 0;
}
