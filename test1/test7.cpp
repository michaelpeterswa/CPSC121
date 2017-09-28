#include <iostream>
#include <iomanip>
using namespace std;

int main(){

float cost, tax, tip, total;

cout << "enter cost of meal: ";
cin >> cost;
cout << "enter tax rate: ";
cin >> tax;
cout << "enter just the tip: ";
cin >> tip;

tax = tax / 100;
tax = tax * cost;


total = cost + tax + tip;

cout << endl;
cout << endl;
cout << setprecision(2) << fixed << "   Meal: " << cost << endl;
cout << setprecision(2) << fixed << "   Tax: " << tax << endl;
cout << setprecision(2) << fixed << "   Tip: " << tip << endl;
cout << endl;
cout << setprecision(2) << fixed << "  Total: " << total << endl;

return 0;
}
