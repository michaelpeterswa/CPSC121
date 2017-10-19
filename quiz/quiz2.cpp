#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;

void getInput(char inp[]);
void dispForward(char inp[]);
void dispBackward(char inp[]);
int HowMany(char inp[], char ch);

int main(){
char ch;
char line[80];
getInput(line);
dispForward(line);
dispBackward(line);
cout << "input a character: ";
cin >> ch;
cout << endl;
cout << HowMany(line, ch) << endl;

return 0;
}

void getInput(char inp[]){
cin.getline(inp, 80);
cout << endl;
}

void dispForward(char inp[]){
for(int i=0; i < strlen(inp); i++)
 cout << inp[i];

cout << endl;
cout << endl;

}

void dispBackward(char inp[]){

for(int i=strlen(inp); i >= 0; i--){
 cout << inp[i];
 }
 
cout << endl;
}
int HowMany(char inp[], char ch){
int c = 0;
for(int i = 0; i < strlen(inp); i++)
  if(inp[i] == ch)
    c++;
return c;
}

 

