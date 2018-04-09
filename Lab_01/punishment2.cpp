#include <iostream>
#include <string>
using namespace std;
int main()
{
	int numberLines, lineTypo;
	cout << "Enter the number of lines for the punishment: ";
	cin >> numberLines;

	if (numberLines <= 0) {
		cout << "You entered an incorrect value for the number of lines!" ;
	} else {
		cout << "Enter the line for which we want to make a typo: ";
			cin >> lineTypo;
		if (lineTypo <= 0 || lineTypo > numberLines) {
			cout << "You entered an incorrect value for typo! ";
		}else {
			for (int i = 0; i < numberLines - 1; i++) {
			 if (i == lineTypo - 1) 
				cout << "I will always use object oriented programing.";
				cout << "I will always use object oriented programming.";
			}
			if (lineTypo == numberLines)
				cout <<"I will always use object oriented programing.";
			}
	}
	cout << "\n";
	return 1;
}
