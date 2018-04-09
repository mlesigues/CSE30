#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <string>
#include "Time.h"
using namespace std;

string my_line;
int getTimeFromUser(string my_line, Time& stamp);
void print24Hour(Time& startTime, Time& endTime);

int main ()
{
	Time startTime(0, 0, 0);
	Time endTime(0, 0, 0);

        cout << "Enter the start time for the lecture (format is HH:MM:SS): ";
        getline (cin, my_line);
        if (getTimeFromUser(my_line, startTime) == 1) {
                cout << "The start time entered is invalid!" << endl;
                return 0;
        }

        cout << "Enter the end time for the lecture (format is HH:MM:SS): ";
        getline (cin, my_line);
        if (getTimeFromUser(my_line, endTime) == 1) {
                cout << "The end time entered is invalid!" << endl;
                return 0;
        }

        print24Hour(startTime, endTime); //call print24 function
        cout << "\n";
        return 0;
}

 // function getTimeFromUser
int getTimeFromUser (string my_line, Time& stamp)
{
	string HourS = my_line.substr (0, 2);
	stamp.setHours(atoi(HourS.c_str()));
	string MinuteS = my_line.substr (3, 2);
	stamp.setMinutes(atoi(MinuteS.c_str()));
	string SecondS = my_line.substr (6, 2);
	stamp.setSeconds(atoi(SecondS.c_str ()));

	if (stamp.getHours() < 0 || stamp.getHours() > 23)
		return 1;
	if (stamp.getMinutes() < 0 || stamp.getMinutes() > 59)
		return 1;
	if (stamp.getSeconds() < 0 || stamp.getSeconds() > 59)
		return 1;

	return 0;
}

//print24Hour function
void print24Hour (Time& startTime, Time& endTime)
{
	cout << "The lecture starts at ";
	cout << setfill('0') << setw(2) << startTime.getHours() << ":";
	cout << setfill('0') << setw(2) << startTime.getMinutes() << ":";
	cout << setfill('0') << setw(2) << startTime.getSeconds();
	cout << " and ends at ";
	cout << setfill('0') << setw(2) << endTime.getHours() << ":";
	cout << setfill('0') << setw(2) << endTime.getMinutes() << ":";
	cout << setfill('0') << setw(2) << endTime.getSeconds();
}


