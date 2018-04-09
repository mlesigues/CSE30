#include <iostream>
using namespace std;
int main()
{
	int userSize;

	cout << "Enter the size of the array: ";
	cin >> userSize;

	if (userSize == 0) { //will check if the user enter a valid number
		cout << "ERROR: you entered an incorrect value for the array size! ";
	} else {
		int userArray[userSize]; //will declare the array
		cout << "Enter the numbers in the array, separated by a space and press enter: ";
			for (int i = 0; i < userSize; i++) { //will read the given values
				cin >> userArray[i];
	}

	int i, j, condition;
	int numbers = 0;

	for (i = 0; i < userSize - 1; i++) { //will check the values, then put it in i

	int i_min = i;
	int min;

		for (j = i+1; j < userSize; j++) { //will check the values, put it in j
			if (userArray[j] > userArray[i_min]) { //if j is bigger than i
				i_min = j;
				min = userArray[j];
			/*	condition = userArray[i]; //condition will hold 2 different values, i & j
				userArray[i] = userArray[j];
				userArray[j] = condition;
				numbers++;*/
				}
			}
		if (i_min > i) {
			condition = userArray[i];
			userArray[i] = userArray[i_min];
			userArray[i_min] = condition;
			numbers++;
		}
	}


	cout << "The is the sorted array in descending order: ";
	for (int i = 0; i < userSize; i++) {
		cout << userArray[i] << " "; //will print out the given numbers in ascending order
	}

	cout << endl;
	cout << "The algorithm selected the maximum for the traverse of the array. " << endl;
	cout<< "It took " << numbers << " swaps to sort the array. " ;

	return 0;
	}
}

