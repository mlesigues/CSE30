#ifndef Queue_h 
#define Queue_h
#include "LinkedList.h"


class Queue: public LinkedList{
	public:
		Queue();					//constructor
		~Queue();					//destructor
		void enqueue (int value);	//enqueue doesn't return a value, but it adds a value into the queue content
		int dequeue();				//the output is the number is first or oldest number and it removes the number in the queue content
		int& front();				//returns a reference to the front element of the queue
};

#endif
