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

	for (i = 0; i < userSize; i++) { //will check the values, then put it in i
	//	min = userArray[i];
	//	local = i;

		for (j = 0; j < userSize; j++) { //will check the values, put it in j
			if (userArray[j] > userArray[i]) { //if j is bigger than i
				condition = userArray[i]; //condition will hold 2 different values, i & j
				userArray[i] = userArray[j];
				userArray[j] = condition;
				}
			}
		}
	/*	condition = userArray[i];
		userArray[i] = userArray[local];
		userArray[local] = condition;
	}*/

	cout << "The is the sorted array in ascending order: ";
	for (int j = 0; j < userSize; j++) {
		cout << userArray[j] << " "; //will print out the given numbers in ascending order
	}

	cout << endl;
	cout << "The algorithm selected the minimum for the traverse of the array. ";

	return 0;
	}
}
