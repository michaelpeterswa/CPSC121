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
char encrypt(char line[], int shift);
char decrypt(char line[], int shift);
int alphToInt(char ch, bool upper);
char intToAlph(int pos, bool upper);
void newline(int amt);
void display(char line[]);
bool shiftchk(int shift);
char inp[81];
int shift;

int main()
{

int shift;
cout << "input shift: " ;
cin >> shift;
cin.ignore();
if(shiftchk(shift)){
  int i;
  newline(1);

  char inp[80];
  cout << "plaintext: ";
  cin.getline(inp, 80);
  newline(2);
  encrypt(inp, shift);
  cout << "Encrypted Cipertext: ";
  display(inp);
  newline(2);
  decrypt(inp, shift);
   
  cout<< "Decrypted Ciphertext: ";
  display(inp);
  newline(3);
  
  }
else if(shiftchk(shift) == false){
cout << "invalid shift"<< endl;
restart();
}
 restart(); //run restart
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

/* 
   char encrypt(char line[], int shift);
   
   pre: takes input for number of new lines
   post: prints endl amt # of times

*/

char encrypt(char line[], int shift){
 for(int i = 0; i < strlen(line); i++){
  if(isalpha(line[i])){
  int upper = isupper(line[i]);
  line[i] = alphToInt(line[i], isupper(line[i]));
  line[i] = (line[i]+ shift)%26;
  line[i] = intToAlph(line[i], upper);
  }
  }

  
return line[81];
  
}
 
 
char decrypt(char line[], int shift){
  for(int i = 0; i < strlen(line); i++){
   if(isalpha(line[i])){
    int upper = isupper(line[i]);
    line[i] = alphToInt(line[i], isupper(line[i]));
    line[i] = (line[i]- shift + 26)%26;
    line[i] = intToAlph(line[i], upper);
    }
  }
  return line[81];
}

bool shiftchk(int shift){
if(shift >= 0 && shift <= 25)
 return true;
else
 return false;
 }
 
void display(char line[]){
  int i = 0;
  while(i < strlen(line)){
  cout << line[i];
  i++;
  }
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
