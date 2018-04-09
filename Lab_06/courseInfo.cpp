#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdlib>
#include <vector>

using namespace std;

struct Time { //time structor
	string days;
	string startTime;
	string endTime;
};

struct Course { //course structor
	string name;
	int credits;
	bool isMajor;
	double avgGrade;
};

struct Student { //student structor
	struct Course course;
	struct Time time;
};

void printStudentInfo (struct Student student, int n) {
	cout << "Course " << n << " : " << student.course.name << endl;
	if (student.course.isMajor) {
		cout << "Note: This course IS a major requirement! " << endl;
	} else {
		cout << "Note: This course is NOT a major requirement!" << endl;
	}

	cout << "Number of credits: " << student.course.credits << endl;
	cout << "Days of lectures: " << student.time.days << endl;
	cout << "Lecture time: " << student.time.startTime << "- " << student.time.endTime << endl;
	cout << "Stat: on average students get " << student.course.avgGrade << " % in this course" << endl;
	cout << "------------------------------ " << endl;
}
//to get digit of character
int get_digit(char digit) {
	switch(digit) {
	case '0':
		return 0;
	case '1':
		return 1;
	case '2':
		return 2;
	case '3':
		return 3;
	case '4':
		return 4;
	case '5':
		return 5;
	case '6':
		return 6;
	case '7':
		return 7;
	case '8':
		return 8;
	case '9':
		return 9;
	}
}

//to convert time properly (am/pm)
string get_time(string line) {
	int number = 0;
	number = number + get_digit(line[0]);
	number = number + get_digit(line[1]);

	if(number < 12) {
		if (number < 9) {
			line[0] = '0';
			line[1] = '0' + number;
			//cout << line << endl;
		}
		if (number == 10) {
			line[0] = '1';
			line[1] = '1';
		}
		if (number == 11) {
			line[0] = '1';
			line[1] = '1';
		}
		line = line + " am ";
	} else {
		number = number - 12;
		if (number < 9) {
			line[0] = '0';
			line[1] = '0' + number;
			//cout << line << endl;
		}
		if (number == 10) {
			line[0] = '1';
			line[1] = '0';
		}
		if (number == 11) {
			line[0] = '1';
			line[1] = '1';
		}
			line = line + " pm ";
	}
	return line;
}

//main func
int main() {
	//put the structures that will be used
	struct Course course;
	struct Time time;
	struct Student student;

	//opening file
	ifstream file ("in.txt");
	string line;

	bool isFirstLine = 1;
	int count = 1;
	int number;
	int numberOfCourse;
	string firstLine;

	cout << "------------------------------" << endl;
	cout << "SCHEDULE OF STUDENT" << endl;
	cout << "------------------------------" << endl;

	//reading file
	while (getline(file, line)) {
		if(isFirstLine) {

		//number of course(s)
			numberOfCourse = atof(line.c_str());
			isFirstLine = false;

		} else { //read given student details

			//course
			course.name = line;

			//credits
			getline(file, line);
			course.credits = atoi(line.c_str());

			//major or not?
			getline(file, line);
			course.isMajor = atoi(line.c_str());

			//average grade
			getline(file, line);
			course.avgGrade = atof(line.c_str());

			//days
			getline(file, line);
			time.days = line;

			//starting time
			getline(file, line);
			time.startTime = get_time(line);

			//ending time
			getline(file, line);
			time.endTime = get_time(line);

			//student struct
			student.course = course;
			student.time = time;

			//print everything
			printStudentInfo(student, count);
			count++;
		}
	}
}









