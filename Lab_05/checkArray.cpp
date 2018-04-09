#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int checkArraySort(int A[],int array_max, int first, int last) //function checkArrraySort
{
        int Asc = 0, Desc = 0;

        for (int i=0; i<array_max-1; i++){ //will check if the array is ascending
                if (A[i] >= A[i+1]){ //if the first index is more than/equal to the next
                        Asc = 1;
                        }
                }

        for (int i=0; i<array_max-1; i++){ //will check if thr array is descending
                if (A[i] <= A[i+1]){ //if the first index is less than/equal to the next
                        Desc = 1;
                        }
                }

        if (Asc == 1 && Desc == 1)
		 return 0;
        if (Asc == 0)
		 return 1;
        if (Desc == 0)
		 return -1;
}

int main()
{
	int start=0, stop=0, function=0;
	const int array_max = 20;
	int arr[array_max];


	cout << "Enter beginning position to output: ";
	cin >> start;
	if (start<0 || start>19){
		cout << "You are trying to check an invalid range of array elements!" << endl;
		return -20;
		}


	cout << "Enter ending position to output: ";
	cin >> stop;
	if (stop<start || stop>19){
		cout << "You are trying to check an invalid range of array elements!" << endl;
		if (stop<start){
			return -10;
			}
		return -20;
		}

	ifstream myin; //input stream
	myin.open ("in.txt"); //in.txt will be created & used
	ofstream myout; //output stream
	myout.open ("out.txt"); //out.txt will be created & used

	string line;


	for(int i=0; i<20; i++){
		getline (myin, line);
		stringstream(line) >> arr[i]; /*converting the string to numbers (sstream) 
						then putting it in the array index */

		if (i>=start && i<=stop){
		myout << arr[i] << " ";
		}
	}

	function = checkArraySort(arr, array_max, start, stop);

	if (function == -20 || function == -10){ //will check if it is out or range
		cout << "You are trying to check an invalid range of array elements!" << endl;
		}
	if (function == -1){ //descending order
		cout << "The portion of array is sorted in descending order!" << endl;
		}
	if (function == 0){ //not sorted
		cout << "The portion of array is not sorted!" << endl;
		}
	if (function == 1){ //ascending
		cout << "The portion of array is sorted in ascending order!" << endl;
		}

	myin.close();
	myout.close();
	return 0;
}
