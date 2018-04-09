#include <iostream>

using namespace std;

void swap(int arr[], int i, int j){ //swap function
   int temp = arr[i];
   arr[i] = arr[j];
   arr[j] = temp;
}

void selectionSortAscending(int arr[], int size){ //ascending function
   for(int i = 0; i < size - 1; ++i){
       int minInd = i;
       for(int j = i + 1; j < size; ++j){
           if(arr[j] < arr[minInd]){
               minInd = j;
           }
       }
       if(minInd != i){
           swap(arr, i, minInd);
       }
   }
}

void selectionSortDescending(int arr[], int size){ //descending function
   for(int i = 0; i < size - 1; ++i){
       int minInd = i;
       for(int j = i + 1; j < size; ++j){
           if(arr[j] > arr[minInd]){
               minInd = j;
           }
       }
       if(minInd != i){
           swap(arr, i, minInd);
       }
   }
}

void sortArr(int arr[], int size, int sortOrder){ //sortArray function
   if(sortOrder == 0){
       selectionSortAscending(arr, size);
   }
   else{
       selectionSortDescending(arr, size);
   }
}

void print(int arr[], int size){ //printing function
   for(int i = 0; i < size; ++i){
       cout << arr[i] << " ";
   }
   cout << endl;
}

int main(){
   int size, sortOrder;
   cout << "Enter size of the array: ";
   cin >> size;
   if(size <= 0) {
       cout << "ERROR: you entered an incorrect value for array size" << endl;
   }  else {
       int *arr = new int[size]; //pointer array
       cout << "Enter numbers in the array, separated by a space, and press enter: ";
       for(int i = 0; i < size; ++i){
           cin >> arr[i];
       }
       cout << "Sort in ascending(0) or descending(1) order? ";
       cin >> sortOrder;

	if (sortOrder == 1) {
      		 sortArr(arr, size, sortOrder);
      		 cout << "This is the sorted array in descending order: ";
      		 print(arr, size);
	 } if (sortOrder == 0) {
		sortArr(arr, size, sortOrder);
		cout <<"This is the sorted array in ascending order: ";
		print(arr, size);
		}
	}


   return 0;
}
