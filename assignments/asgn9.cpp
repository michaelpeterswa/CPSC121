#include <cstring>
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

struct Prime {
  int num[20];
  char prime[20];
  };

bool getInput(int lower, int upper);
void rand(int lower, int upper, int (&randnum)[20]);
void bubbl(int (&randnum)[20]);
void fill(int (&randnum)[20], Prime &val);
void primechk(Prime &val);
void display(Prime& val);

Prime val;

int main(){


int lower, upper;
int randnum[20];

cout << "enter a lower bound followed by an upper bound (0-999)" << endl;
cin >> lower;
cin >> upper;
if(getInput(lower, upper))
 {
 cout << endl;
 rand(lower, upper, randnum);
 bubbl(randnum);
 fill(randnum, val);
 primechk(val);
 display(val);
 
 }



return 0;
}

/*
Pre: lower, upper
Post: return true if bounds fit, false otherwise
*/

bool getInput(int lower, int upper)
{
if(lower >= 0 && lower < 999)
 {
 if(upper > lower && upper <= 999)
  {
  return true;
  }
 else{
  cout << "enter an integer that fits the bounds" << endl;
  cin.clear();
  cin.ignore();
  main();
 }
 }
else{
  cout << "enter an lower integer that fits the bounds" << endl;
  cin.clear();
  cin.ignore();
  main();
  }
}

/*
Pre: lower, upper, randnum
Post: random number in randnum array
*/

void rand(int lower, int upper, int (&randnum)[20])
{
int seed = time(0);
srand(seed);
int total = upper-lower;

 
 for(int i = 0; i < 20; i++)
 {
 randnum[i] = (rand() % total) + lower;
 }
}

/*
Pre: randnum
Post: bubble sorted rand num array
*/

void bubbl(int (&randnum)[20]){
int swap = 0;
 for(int j = 0; j < 20; j++){ 
  for(int i = 0; i < 19; i++){
   if(randnum[i] > randnum[i+1]){
    
    swap = randnum[i];
    randnum[i] = randnum[i+1];
    randnum[i+1] = swap;
    }
  } 
 }  
}

/*
Pre: randnum, Prime val
Post: fills struct with num data from randnum
*/

void fill(int (&randnum)[20], Prime &val){
for(int i = 0; i < 20; i++){
  val.num[i] = randnum[i];
  }
}

/*
Pre: Prime val
Post: checks for primality, returns 'p' for prime, 'c' for composite
*/

void primechk(Prime &val){
  for(int j = 0; j < 20; j++){
    for(int i = 2; i < val.num[i]; i++){
      if(val.num[j]%i==0){
        val.prime[j] = 'c';
        break;
        }  
      else{
        val.prime[j] = 'p';
        break;
        }
  }
}
 }

/*
Pre: Prime Struct
Post: displays contents of the struct
*/

void display(Prime& val){
  for(int i = 0; i < 20; i++)
    cout << val.num[i] << " " << val.prime[i] << endl;

}
