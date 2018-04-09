//Time header
#ifndef Time_h
#define Time_h

class Time //Time declaration
{
	private:
	int hours, minutes, seconds;

/*	public:
	Time(), Time(parameters), (~Time())
	3 accessor functions: each returns for hours,minutes,seconds respectively.
	3 mutator functions: each one takes a parameter and sets it as the current
	value for hours, minutes, or seconds. */

	public:
		Time(int hrs, int mins, int sec);

		void setHours(int hrs);
		int getHours();

		void setMinutes(int mins);
		int getMinutes();

		void setSeconds(int sec);
		int getSeconds();

//		~Time(); //it should do nothing


};

#endif
