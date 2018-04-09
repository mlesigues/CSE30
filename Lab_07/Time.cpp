#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
//Time.cpp
#include "Time.h"

Time :: Time(int hrs, int mins, int sec) //constructors
{
	hours = hrs;
	minutes = mins;
	seconds = sec;
};

int Time :: getHours() //accessor
{
	return hours;
}

void Time :: setHours(int hrs) //mutator
{
	hours = hrs;
}

int Time :: getMinutes()
{
	return minutes;
}

void Time :: setMinutes(int mins)
{
	minutes = mins;
}

int Time :: getSeconds()
{
	return seconds;
}

void Time :: setSeconds(int sec)
{
	seconds = sec;
}



