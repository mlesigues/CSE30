#include <iostream>
#include <string.h>
using namespace std;

 int main()
{
	char  Userstr[100], condition; //array with 100 indices
	int a, b = 0; //intializing integers a & b
	cout << "Enter the string to reverse: "; //will ask the user for string
	cin >> Userstr;
	a = 0;
	b = strlen(Userstr) - 1; //will find the length of the given string

	while (a < b) { //will check if a is less than b
		condition = Userstr[a]; // will set condition to Userstr[a]
		Userstr[a] = Userstr[b]; //Userstr[a] will then be set to Userstr[b]
		Userstr[b] = condition; //will set Userstr[b] to condition
		a++; //will increase a
		b--; //will decrease b
	}
	
	cout<< "The reverse of the string is: " << Userstr << endl; //will print out the reverse string
	
	return 0;
}
