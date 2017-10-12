/*
CPSC 121-02
Michael Peters
mpeters4
michaelpeterswa (github)
Assignment 6
*/

//generate prime numbers from x to y


#include <iostream>
#include <cmath>
#include <cctype>
#include <cstdlib> //add libraries
using namespace std;

bool isPrime(int num);
bool inp();
int x, y;

int main()
{
 int num, z, l;
 int c[10000];
 int e[500];
 z = 0;
 l = 0;
 cout << "Input lower bounds: " << endl;
 cin >> x;
 cout << "Input upper bounds: " << endl;
 cin >> y;
 if(inp() == true){
 cout << endl;
 
 
 for(num=x; num <= y; num++){
  if(isPrime(num) == true){
   c[z] = num;
   z++;
   }
   }
   cout << "Prime numbers are as follows:" << endl;
   cout << endl;
 
while(l < z){
 cout << c[l] << endl;
 l++;
  } 
}
else{
cout << endl;
cout << "One or both inputs are invalid" << endl;
exit(1);
}
return 0;
}

/*
Pre: num is a integer > 1
Post: Returns true if num is prime, false otherwise

creates prime numbers

*/

bool isPrime(int num){
  int u, v=1;
  if(num > 1){
  for(u = num-1; u > 1; u--){
    v=num%u;
    if(v==0){
  
    return false;
    }
  }
  if(v==1){
    return true;
  }
  
  }
  else if(num >= 1){
  cout << "Lower bound must be over 1" << endl;
  exit(1);
  }
}

/*
Pre : x > 0 and y > 0 and y <= 1k
Post: Return True, false otherwise
*/

bool inp(){
  
  if(x > 0 && y > 0 && y <= 1000)
   return true;
   
 return false;
 
}
// test line

