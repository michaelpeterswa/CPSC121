#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string getKey();
string getPlain();
void load(char (&bifid)[5][5], string key);
void display(char (&bifid)[5][5]);
void createNums(char (&bifid)[5][5], string plaintext);

int main(){
char bifid[5][5];
string key = getKey();
string plaintext = getPlain();
cout << endl;
load(bifid, key);
display(bifid);
//createNums(bifid, plaintext);

return 0;
}

string getKey()
{
  string key;
  cout << "enter up to 25 unique alphabetic chars except 'J':" << endl;
  getline(cin, key);
  for(int i = 0; i < 26; i++)
  {
    char ch = 'A' + i;
    if(ch != 'J')
    {
      if(key.find(ch) == string::npos)
      {
      key = key + ch;
      }
    }  
  }
  return key;
}

string getPlain()
{
  string plaintext;
  cout << "enter plaintext:" << endl;
  getline(cin, plaintext);
  return plaintext;
  }

void load(char (&bifid)[5][5], string key){
int k = 0;
for(int i = 0; i < 5; i++)
{
  for(int j = 0; j < 5; j++)
  {
   bifid[j][i] = key.at(k);
   k++;
  }
 }
}

void display(char (&bifid)[5][5])
{
cout << "   #############" << endl;
for(int i = 0; i < 5; i++)
{
 cout << "   # ";
  for(int j = 0; j < 5; j++)
  {
   cout << bifid[j][i] << " ";
  }
  cout << "#";
  cout << endl;
 }
cout << "   #############";
cout << endl;
cout << endl;
}

void createNums(char (&bifid)[5][5], string plaintext){

int length = plaintext.length();
int numlist[length];

int l = 0;

for(int a = 0; a < length; a++)
 {
  for(int i = 0; i < 5; i++)
   {
    for(int j = 0; j < 5; j++)
     {
      
      if(plaintext.at(l) == bifid[j][i])
       {
       numlist[l] = j;
      // numlist[l] = i;
       l++;
       ;
       }
     }
   }
 }
 
for(int b = 0; b < length; b++)
 {
 cout << numlist[b];
 }
 cout << endl; 
}
