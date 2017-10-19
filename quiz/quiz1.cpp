#include <cstdlib>
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

void getInput(char line[]);
void emendLine(char line[]);
void displayOutput(char line[]);

int main(){
char line[80];
getInput(line);
emendLine(line);
displayOutput(line);

return 0;

}
void getInput(char line[]){
 cin.getline(line, 80);


}
void emendLine(char line[]){
 for(int i = 0; i < strlen(line); i++)
  if(isalpha(line[i]))
    if(isupper(line[i]))
     line[i] = tolower(line[i]);
  else
   line[i] = toupper(line[i]);
  
    
}
void displayOutput(char line[]){
int i = 0;
while(i < strlen(line)){
 cout << line[i];
 i++;
}
cout << endl;
}
