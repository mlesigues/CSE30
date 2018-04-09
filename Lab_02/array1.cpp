#include <iostream>
using namespace std;

int main()
{

	int userSize = 0; //intializing size
	int condition = 0;

	cout << "Enter the size of the array: "; //will ask the user for size
	cin >> userSize;

	if (userSize <= 0) { //will check if the user's input is valid
		cout << "ERROR: you entered an incorrect value for the array size!";
	} else {
		int UserArray[userSize]; // declaring the array
		cout << "Enter the numbers in the array, separated by a space and press enter: ";
			for (int i = 0; i < userSize; i++) { //will read the given  values
				cin >> UserArray[i];
	}
		for (int i = 0; i < userSize - 1; i++) { //will check if the values are increasing or not
			if (UserArray[i] >= UserArray[i+1]) {
				condition = 1;
			}

		}

	if(condition == 1) {
		cout << "This is NOT an increasing array!";
	} else {
		cout << "This IS an increasing array!";
		}

	cout << "\n";

	for (int i = 0; i < userSize; i++) {
		cout << UserArray[i] << " "; //will print out the array with space 
		}
	}

	cout << "\n";
	return 1;
}

