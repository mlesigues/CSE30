#include <iostream>
#include <string>
using namespace std;
int main()
{
	int numberLines;
	cout << "Enter the number of lines for the punishment: ";
	cin >> numberLines;

       	if (numberLines <= 0) {
        		cout << "You entered an incorrect value for the number of lines! ";
	}	else {
			for (int i = 0; i < numberLines; i++)
				cout << "I will always use object oriented programming. ";
			}

	cout << "\n";
	return 1;
}
