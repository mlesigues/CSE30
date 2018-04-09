#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main()
{

	string line;
	string* array;
	int lineSize = 0;


	ifstream fileInput;
	fileInput.open("words_in.txt");

	ofstream fileOutput;
	fileOutput.open("words_out.txt");

	while (!fileInput.eof()) //counting the unknown amount of words in the file line by line
	{
		getline(fileInput,line);
		lineSize++;
	}
	cout << lineSize;
	 array = new string[lineSize];
	fileInput.close();	 //Close the file to start over
	fileInput.open("words_in.txt"); //Restart from the beginning of the file

	for(int i = 0; i < lineSize - 1; i++) //after knowing the amount of lines/words in the file it reads in.txt
		{
      		getline(fileInput,line);
      		array[i]=line;
		}

	for(int j = 0; j < lineSize - 1; j++) //this write on out.txt according to the input
		{
         	fileOutput << array[j] <<endl;
		}

	fileInput.close();  //close input
	fileOutput.close();  //close output

	return 0;
}

