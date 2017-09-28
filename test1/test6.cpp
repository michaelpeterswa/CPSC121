#include <iostream>
using namespace std;

int restart();

int main(){

float f, c;
char fc, yn;
cout << "convert to f or c: ";
cin >> fc;

switch(fc){
 case 'c' :
  cin >> f;
  c = (f-32)*5/9;
  cout << "The temperature is: " << c << " celsius" << endl;
  restart();
  break;
 case 'f' :
  cin >> c;
  f = (c*9/5)+32;
  cout << "The temperature is: " << f << " fahrenheit" << endl;
  restart();
  break;
 default :
  cout << "invalid" << endl;
  main();
}

return 0;
}

int restart(){

char yn;
cout << "would you like to restart?" << endl;
cin >> yn;
switch(yn){
   case 'y' :
    main();
    break;
   case 'n' :
    exit(1);
    break;
   default :
    cout << "invalid" << endl;
    restart();
   
  }
}
