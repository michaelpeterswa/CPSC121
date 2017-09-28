/*
CPSC 121-02
Michael Peters
mpeters4
michaelpeterswa (github)
Assignment 4
*/


#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main(){

int a = 11;
int b = 3;
cout << a / b << endl;
cout << a / static_cast<float>(b) < endl;
cout << a % b << endl;
cout << b % a << endl;

return 0;




}
