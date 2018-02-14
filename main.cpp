#include <ctime>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
using namespace std;

int iLiczba;
int x;

int main()
{

cout << "   GENERATOR LICZB LOSOWYCH     " << endl;
cout << "--------------------------------" << endl;
cout << endl;
cout<< "Podaj maksymalna liczbe ";
cin>>x;
cout << endl;
srand((int)time(NULL));
cout << "Wylosowana liczba to: ";
iLiczba = rand() %x;
cout << iLiczba;
cout<< " "<<endl;
cout<< " "<<endl;
return 0;
}
