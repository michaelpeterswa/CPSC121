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
#include <iomanip>

using namespace std;

char ch[80];
void restart(); //restart script
int mystrlen(char[]);
bool isAlpha(char ch);
bool firstHalfA(char ch);
bool firstHalfa(char ch);
bool secondHalfA(char ch);
bool secondHalfa(char ch);
char encrypt(char ch);

int main()
{
char ch[80];
int i = 0;
cout << "input character sequence (less than 80)" << endl;
cout << "Plaintext: ";
cin.getline(ch,80);
cout << endl;

cout << "Ciphertext: ";
while(i < mystrlen(ch)){
 encrypt(ch[i]);
 i++;
}
cout << endl;
restart(); //run restart
return 0;
}
void restart() //restart function
	{
 	char yn;
	cout << "would you like to restart?" << endl;
	cin >> yn;
  cin.ignore();
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



int mystrlen(char strIn[]){
int ct = 0;
while (strIn[ct] != '\0'){
  ct++;
 }
return ct;
}




bool isAlpha(char ch){
if((65 <= ch && ch <= 90)|| (97 <= ch && ch <= 122)){
  return true;
  }
  return false;
}

bool firstHalfA(char ch){
if (65 <= ch && ch <= 77){
  return true;
  }
  return false;
}

bool firstHalfa(char ch){
if (97 <= ch && ch <= 109){
  return true;
  }
  return false;
}

bool secondHalfA(char ch){
if (78 <= ch && ch <= 90){
  return true;
  }
  return false;
}

bool secondHalfa(char ch){
if (110 <= ch && ch <= 122){
  return true;
  }
  return false;
}

char encrypt(char ch){

 char out;

 if(isAlpha(ch) == true && firstHalfA(ch) == true){
  out = ch + 13;
  cout << out;
  }

 if(isAlpha(ch) == true && secondHalfA(ch) == true){
  out = ch - 13;
  cout << out;
  }
  
 if(isAlpha(ch) == true && firstHalfa(ch) == true){
  out = ch + 13;
  cout << out;
  
  }
 if(isAlpha(ch) == true && secondHalfa(ch) == true){
  out = ch - 13;
  cout << out;
  }
  
 if(isAlpha(ch) == false)
  cout << ch;

}

