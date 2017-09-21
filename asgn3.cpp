/*
CPSC 121-02
Michael Peters
mpeters4
michaelpeterswa (github)
Assignment 3
*/

//convert base 10 integer into base 2


#include <iostream> 
#include <unistd.h>
using namespace std;

void restart(); //define restart function

int main()
{
 int base10, base2, quotient, remainder; //create variables
 char yn;

 cout << endl;
 cout << "What is the base 10 integer? (Enter a value)" << endl;
 cout << endl; 
 cin >> base10; //ask for starting integer

 quotient = base10; //set quotient also equal to base10
 cout << endl;
 cout << "base 10 integer: " << base10 << endl;
 cout << endl;
 cout << "base 2 integer:" << endl;
 cout << endl;


	while(quotient > 0){
        
	remainder = quotient % 2; //compute modulus
	quotient = quotient / 2; //divide by 2	
	

	cout << remainder << endl; //print remainder

	}
 cout << endl;
 cout << "Hmm.. Please read the base 2 digit from bottom to top" << endl;
 cout << "I am not experienced enough in the ways of C++ yet." << endl;
 cout << endl;
 restart(); //start restart function
 return 0;
}

void restart() //restart function
	{
 	char yn;
	cout << "Would you like to convert another integer? (Y/N)" << 		endl;
 	cin >> yn;
	
	if(yn == 'Y' || yn == 'y'){
	
	sleep(1);	
	cout << endl;	
	cout << "starting..." << endl;
	sleep(1);	
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
 


