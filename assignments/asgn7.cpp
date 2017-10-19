/*
CPSC 121-02
Michael Peters
mpeters4
michaelpeterswa (github)
Assignment 5
*/

//Rotation 13 Encode/Decode


#include <iostream> //add libraries
#include <cstdlib>
#include <cstring>
#include <cctype>

using namespace std;


void restart(); //restart script
char encrypt(char ch, int shift);
char decrypt(char ch, int shift);
int alphToInt(char ch, bool upper);
char intToAlph(int pos, bool upper);
void newline(int amt);
void display(char line[]);
bool shiftchk(int shift);
char inp[80];
int shift;

int main()
{

int shift;
cout << "input shift: " ;
cin >> shift;
cin.ignore();

  int i;
  newline(1);

  char inp[80];
  cout << "plaintext: ";
  cin.getline(inp, 80);
  newline(1);
  for(i = 0; i < strlen(inp); i++){
    encrypt(inp[i], shift);
   }
   display(inp);
  newline(1);

  cout << "length: " << strlen(inp) << endl;
  //restart(); //run restart
 return 0;
}
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
char encrypt(char ch, int shift){
 int a;
 char b;
 a = (alphToInt(ch, isupper(ch)) + shift)%26;
 b = intToAlph(a, isupper(a));
 return b;
  }
 
 
char decrypt(char ch, int shift){
 
}

/*bool shiftchk(int shift){
if(shift >= 0 && shift <= 25)
 return true;
else
 return false;
 }*/
 
void display(char line[]){
 for(int i = 0; i < strlen(inp); i++)
  cout << line[i] << endl;
}

int alphToInt(char ch, bool upper){
int a;
if(upper)
 a = (int)ch - 65;
else
 a = (int)ch - 97;

return a;

 }
char intToAlph(int pos, bool upper){
char a;
if(upper)
 a = (char)pos + 65;
else
 a = (char)pos + 97;

return a;

}
