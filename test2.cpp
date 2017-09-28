#include <iostream>
using namespace std;

int main(){

int high, low, odd;
cout << "enter high:";
cin >> high;
cout << "enter low:";
cin >> low;

while(low < high){
 odd = low % 2; 
 if(odd == 1){
  cout << low << endl;
  }
 low++;
}
return 0;
}
