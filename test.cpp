#include <iostream>
#include <cmath>

using namespace std;

int main(){

// Ez egy test program a pythagorasz tételhez

double a;
double b;

cout << "Adj egy szamot: ";
cin >> a;
cout << "Adj egy szamot: ";
cin >> b;

double c = sqrt(pow(a, 2) + pow(b, 2));

cout << "Ez a 3. oldal: " << c;



return 0;


}