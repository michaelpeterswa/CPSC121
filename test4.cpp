#include <iostream>
using namespace std;

int main(){

float f, c;
char fc;
cout << "convert to f or c: ";
cin >> fc;

switch(fc){
 case 'c' :
  cin >> f;
  c = (f-32)*5/9;
  cout << "The temperature is: " << c << " celsius" << endl;
  break;
 case 'f' :
  cin >> c;
  f = (c*9/5)+32;
  cout << "The temperature is: " << f << " fahrenheit" << endl;
  break;
 default :
  cout << "invalid" << endl;
  main();
}

return 0;
}
