#include<iostream>
#include<iomanip>
#include<cstring>
#include<string>
#include <cstdlib>
using namespace std;

struct Time{
string hour_s, minute_s, second_s;
int hours, minutes, seconds;
string my_line;
} start, end;

int getTimeFromUser(Time& time);
void print24Hour(Time start, Time end);

int main()
{
	cout << "Enter the start time for the lecture (format is HH:MM:SS): ";
	getline(cin, start.my_line);
	if (getTimeFromUser(start) == 1){
		cout << "The start time entered is invalid!" << endl;;
		return 0;
		}

	cout << "Enter the end time for the lecture (format is HH:MM:SS): ";
	getline(cin, end.my_line);
	if (getTimeFromUser(end) == 1){
		cout << "The end time entered is invalid!" << endl;
		return 0;
		}

	print24Hour(start, end);
	cout << "\n";
	return 0;
}

int getTimeFromUser(Time& time)
{
	time.hour_s = time.my_line.substr (0, 2);
	time.hours = atoi(time.hour_s.c_str());
	time.minute_s = time.my_line.substr (3, 2);
	time.minutes = atoi(time.minute_s.c_str());
	time.second_s = time.my_line.substr (6, 2);
	time.seconds = atoi(time.second_s.c_str());

	if (time.hours < 0 || time.hours > 23) return 1;
	if (time.minutes < 0 || time.minutes > 59) return 1;
	if (time.seconds < 0 || time.seconds > 59) return 1;

	return 0;
}

void print24Hour(Time start, Time end)
{
	cout << "The lecture starts at ";
	cout << setfill('0') << setw(2) << start.hours << ":";
	cout << setfill('0') << setw(2) << start.minutes << ":";
	cout << setfill('0') << setw(2) << start.seconds;
	cout << " and ends at ";
	cout << setfill('0') << setw(2) << end.hours << ":";
	cout << setfill('0') << setw(2) << end.minutes << ":";
	cout << setfill('0') << setw(2) << end.seconds;
}
