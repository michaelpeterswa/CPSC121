/*
CPSC 121-02
Michael Peters
mpeters4
michaelpeterswa (github)
Assignment 8
*/

//Affine Cipher


#include <iostream> //add libraries
#include <cstdlib>
#include <cstring>
#include <cctype>

using namespace std;


void restart(); //restart script
char encrypt_decrypt(char ch[], int mult, int shift);
int alphToInt(char ch, bool upper);
char intToAlph(int pos, bool upper);
void newline(int amt);
void display(char line[]);
bool shiftchk(int shift);
bool multchk(int mult);
int multInv(int inv[], int num);
char inp[81];
int shift;
int mult;
int inv[26] = {0,1,0,9,0,21,0,15,0,3,0,19,0,0,0,7,0,23,0,11,0,5,0,17,0,25};


int main()
{

int shift;
cout << "input mult: " ;
cin >> mult;
cout << "input shift: " ;
cin >> shift;
cin.ignore();
if(multchk(mult)){
if(shiftchk(shift)){
  int i;
  newline(1);

  char inp[80];
  cout << "plaintext: ";
  cin.getline(inp, 80);
  newline(2);
  encrypt_decrypt(inp, mult, shift);
  cout << "Encrypted Cipertext: ";
  display(inp);
  newline(2);
  encrypt_decrypt(inp, inv[mult], shift);
  
  
  }
  
else if(shiftchk(shift) == false){
cout << "invalid shift"<< endl;
restart();
}
}
else if(multchk(mult) == false){
cout << "invalid mult"<< endl;
restart();
}
 restart(); //run restart
 return 0;
}

 /* 
   void restart()
   
   pre: takes input yn and asks user for restart
   post: main() if yn == "y" || "Y"

*/

void restart() //restart function
	{
 	char yn;
	cout << "would you like to restart? (y/n)" << endl;
	
  cin >> yn;
  switch(yn){
    	 case 'y':
          main();
          break;
        case 'Y':
          main();
          break;
        case 'n':
          cout << "Goodbye!" << endl;
          exit(1);
          break;
        case 'N':
          cout << "Goodbye!" << endl;
          exit(1);
          break;
        default :
          cout << "invalid" << endl;
          restart();
          
          break;
   
	}

}

/* 
   newline(amt);
   
   pre: takes input for number of new lines
   post: prints endl amt # of times

*/

void newline(int amt){
for(int i = 0; i < amt; i++)
  cout << endl;
  
}

/* 
   char encrypt_decrypt(char line[], int mult, int shift);
   
   pre: takes plaintext string
   post: encrypts the string based upon shift amt and mult

*/

char encrypt_decrypt(char line[], int mult, int shift){
 int dline[81];
 for(int i = 0; i < strlen(line); i++){
  if(isalpha(line[i])){
  int upper = isupper(line[i]);
  line[i] = alphToInt(line[i], isupper(line[i]));
  line[i] = ((mult * line[i])+ shift)% 26;
  line[i] = intToAlph(line[i], upper);
  }
  }
  
return line[81];
  
}

/* 
   bool shiftchk(int shift);
   
   pre: checks shift input for validity
   post: returns true if constraints met

*/

bool shiftchk(int shift){
if(shift >= 0 && shift <= 25)
 return true;
else
 return false;
 }
 /* 
   bool multchk(int mult);
   
   pre: checks mult input for validity
   post: returns true if constraints met

*/

bool multchk(int mult){
if(mult >= 0 && mult <= 25 && mult % 2 == 1 && mult != 13)
 return true;
else
 return false;
 }
/* 
   void display(char line[]);
   
   pre: takes inp string
   post: prints to console inp[]
   
*/

void display(char line[]){
  int i = 0;
  while(i < strlen(line)){
  cout << line[i];
  i++;
  }
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
/* multInv
pre: input two variables
post: multiplicative inverse
*/

int multInv(int inv[], int num)
  {
  return inv[num];
  }
