/*
CPSC 121-02
Michael Peters
mpeters4
michaelpeterswa (github)
Assignment 4
*/

//print random numbers in a block of specified size i x j


#include <iostream> //add libraries
#include <cstdlib>
#include <time.h>

using namespace std;


void restart(); //restart script

int main()
{
 int i, j, ic, jc; //create variables
 unsigned int ascii, seed;
 ic = 0; //set counter values
 jc = 0;

 cout << endl; //gather values for variables i and j
 cout << "How many rows? (i)" << endl; 
 cin >> i;
 cout << endl;
 cout << "How many columns? (j)" << endl; 
 cin >> j;

 seed = time(0);
 srand(seed); //seed randomizer with current time

 cout << endl;

 //while loops count i x j and print grid accordingly

 while(ic<(i)){
 	while(jc<(j)){
 
	ascii = rand()%26 + 65; //random ascii value --  uppercase letter
 	cout << (char) ascii << " "; //static cast to char
 	jc++;
	}
 jc = 0;
 ic++;
 cout << endl;
 
}
cout << endl;
restart(); //run restart
return 0;
}
void restart() //restart function
	{
 	char yn;
	cout << "Would you like to recieve another set? (Y/N)" << endl;
 	cin >> yn;
	
	if(yn == 'Y' || yn == 'y'){
	
	main();

  	 }

	else if(yn == 'N' || yn == 'n'){
	cout << endl;
	cout << "Goodbye!" << endl;
	cout << endl;	

	   }
	else{
	cout << endl;
	cout << "That is not a valid input" << endl;
	cout << endl;
	restart();
	}
	}
 


