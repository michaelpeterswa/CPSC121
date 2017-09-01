/*
CPSC 121-02
Michael Peters
michaelpeterswa
Assignment 2 
*/

//compute price of driving trip from Spokane to Las Vegas

#include <iostream>
using namespace std;

int main()
{
 float dist, gas, mpg, price; 

 cout << "What is the distance between Spokane and Las Vegas? (Enter a value)" << endl;
 cin >> dist;
 cout << "What is the current price per gallon of Gasoline? (Enter a value)" << endl;
 cin >> gas;
 cout << "What is the MPG of your vehicle? (Enter a value)" << endl;
 cin >> mpg;

 cout << endl;
 cout << endl;

 price = gas * (dist / mpg);


 cout << "It will cost $"<< price << " to travel from Spokane to Las Vegas." << endl;
 cout << endl;
 cout << endl;

 return 0;
}
