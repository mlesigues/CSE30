#include <iostream>
using namespace std;

string string1, string2;
int userRepeat = 1;

//function combineString
void combineStr()
{
	for (int i = 1; i < userRepeat; i++) {
		string1 += string2; //concatenates the string
			}
}

void combineStr(); //declaring the function
int main()
{
	if (userRepeat > 0) {
		cout << "Enter a string: ";
		cin >> string1;
		string2 = string1;

		cout << "Enter a number of times: ";
		cin >> userRepeat;
	} else {
		cout <<"ERROR: you entered a wrong value/s!";
	}

	if (userRepeat > 0) {
		combineStr();
		cout << "The resulting string is: ";
		cout << string1 << endl;
		}

	return 1;
}

