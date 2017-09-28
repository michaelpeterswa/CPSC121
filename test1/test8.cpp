#include <iostream>
using namespace std;

int main(){

int high, low, odd, j;
cout << "enter high:";
cin >> high;
cout << "enter j:";
cin >> j;
low = -1;


while(low < high){
 low = low + j;
 
 cout << low << endl;
}
return 0;
}
