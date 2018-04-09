#include <iostream>
using namespace std;
int main()
{
	int userSize, userSearch = 0;


	cout << "Enter the size of the array: "; //will ask for array size
	cin >> userSize; //will set the user input to userSize

	if(userSize <= 0) { //will check if the user input is valid
		cout << "ERROR: you entered an incorrrect value for the array size!" << endl;
	} else {
		int userArray[userSize]; //intializing userArray
		cout << "Enter the numbers in the array, separated by a space, and press enter: ";
			for (int i = 0; i < userSize; i++) { //will put the values to userArray
				cin >> userArray[i];
			}

	cout << "Enter a number to search for in the array: ";
	cin >> userSearch;
	bool notFound = false; //will check if the value is not given

	for (int i = 0; i < userSize; i++) { //will look for the user's want value

		if (userSearch == userArray[i]) {
			notFound = true;
			cout << "Found value " << userSearch << " at index " << i << ", which took " << (i+1)  << " checks. " << endl;
		if (userSearch == 1) {
			cout << "We ran into the best case scenario! " << endl;

		return 0;
	}

	if (userSearch == userSize) { //if the user's want value will take too long to find
		cout << "We ran into the worst case scenario! " << endl;

		return 0;
			}
		}
	}

	if(!notFound) { //if the user's want value is not on the array
		cout << "The value v was not found in the array! ";
	}

		return 0;
	}
}
