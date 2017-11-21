/*
Michael Peters
mpeters4
michaelpeterswa (github)
CPSC121-02
asgn10.cpp
11.15.17
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

char EorD();
char encDec(char ch, int alpha, int beta);
int alphchk();
int betachk();
int makePositive(int alpha);
int multInv(int inv[], int alpha);
int inv[26] = {0,1,0,9,0,21,0,15,0,3,0,19,0,0,0,7,0,23,0,11,0,5,0,17,0,25};

using namespace std;

int main(){
int alpha;
int beta;
char ch;
char a;
char b;

ifstream inputFile;
inputFile.open("asgn10.txt");
ofstream outputFile;
outputFile.open("asgn10crypt.txt");

ch = EorD();
alpha = alphchk();
beta = betachk();


inputFile.get(a);
if(ch == 'e' || ch == 'E')
 {
  while(inputFile){
  b = encDec(a, alpha, beta);
  outputFile.put(b);
  inputFile.get(a);
  }
 }
if(ch == 'd' || ch == 'D')
 {
 beta = (multInv(inv, alpha)* beta);
  while(inputFile){
  b = encDec(a, multInv(inv, alpha), -beta);
  outputFile.put(b);
  inputFile.get(a);
  }
 }
 inputFile.close();
 outputFile.close();
 return 0;

}


/*
pre: get alpha from keyboard
post: return alpha if constraints are met
*/
int alphchk(){
int alpha;
cout << "please input alpha:" << endl;
cin >> alpha;
  if(alpha < 26 && alpha % 2 != 0){
    if(alpha != 13){
      return makePositive(alpha);
      }
    else
     {
    cout << "invalid alpha" << endl; 
    cout << endl;
    alphchk();
    }
    }
  else
    {
    cout << "invalid alpha" << endl; 
    cout << endl;
    alphchk();
    }
}

/*
pre: get beta from keyboard
post: return beta if constraints are met
*/
int betachk(){
int beta;
cout << "please input beta:" << endl;
cin >> beta;
 if(beta >= 0 && beta <= 25)
  return beta;
 else
 {
  cout << "invalid beta" << endl;
  cout << endl;
  betachk();
  }
}

/*
pre: get ch from keyboard
post: return ch if constraints are met
*/
char EorD(){
char ch;
cout << "enter e or d" << endl;
cin >> ch;
  if(ch == 'e' || ch == 'E')
    return ch;
  if(ch == 'd' || ch == 'D')
    return ch;
  else
    {
    cout << "invalid" << endl;
    cout << endl;
    EorD();
    }
}

/*
pre: get alpha from program
post: return alpha once positive, maintaing modulus
*/
int makePositive(int alpha){
while(alpha < 0)
 alpha = alpha + 26;
 
return alpha;

}

/*
pre: get array of multiplicative inverses and alpha
post: return multiplicative inverse of alpha
*/
int multInv(int inv[], int alpha)
  {
  return inv[alpha];
  }
/* 
   char alphToInt(char ch, bool upper);
   
   pre: takes alphanumeric value from ascii
   post: returns integer 0-26 based upon english alphabet
   
*/

int alphToInt(char ch, bool upper){
int a;
if(upper)
 a = (int)ch - 65;
else
 a = (int)ch - 97;

return a;

 }

/* 
   char intToAlph(int pos, bool upper);
   
   pre: takes integer 0-26 based upon english alphabet
   post: returns alphanumeric value from ascii

*/

char intToAlph(int pos, bool upper){
char a;
if(upper)
 a = (char)pos + 65;
else
 a = (char)pos + 97;

return a;

}

/*
pre: get ch, alpha, and beta
post: return encrypted ch
*/
char encDec(char ch, int alpha, int beta){
  if(isalpha(ch)){
  int upper = isupper(ch);
  ch = alphToInt(ch, isupper(ch));
  ch = makePositive(((alpha * ch)+ beta))% 26;
  ch = intToAlph(ch, upper);
  }

  
return ch;
  
}
