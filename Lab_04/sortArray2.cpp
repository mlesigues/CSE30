#include <iostream>
using namespace std;

int Size = 0;
int order = 0;
int Arr[0];

void sortArr(int Arr[], int Size);
int main()
{
	cout << "Enter the size of the array: ";
	cin >> Size;

	if (Size < 1) {
		cout << "ERROR: You entered an incorrect value for the array size!";
	}

	else {
		Arr[Size]; //declare the array

		cout << "Enter the numbers in the array, separated by a space, and press enter: ";
		for (int i = 0; i < Size; i++){
			cin >> Arr[i];
			}

		cout << "Sort in ascending (0) or descending (1) order? ";
		cin >> order;
		sortArr(Arr, Size); //call the sortArr function

		if (order == 0){
			cout << "This is the sorted array in ascending order: ";
			for (int n = 0; n < Size; n++){
				cout << Arr[n] << " ";
				}
			}
		else if (order == 1){
			cout << "This is the sorted array in descending order: ";
			for (int n = 0; n < Size; n++){
				cout << Arr[n] << " ";
				}
			}
		}
	cout << "\n";
	return 1;
}

//selection sort function
void sortArr(int arr[], int length) {
	int j, temp;

if (order == 1) {
	for (int i = 0; i < length; i++) {
		j = i;

		while (j > 0 && arr[j] > arr[j-1]) {
			temp = arr[j];
			arr[j] = arr[j-1];
			arr[j-1] = temp;
			j--;
			}
		}
}

else if (order == 0) {
	for (int i = 0; i < length; i++) {
		j = i;

		while (j > 0 && arr[j] < arr[j-1]) {
			temp = arr[j];
			arr[j] = arr[j-1];
			arr[j-1] = temp;
			j--;
			}
		}
	}
}
