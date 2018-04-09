#ifndef Queue_char_h 
#define Queue_char_h
#include "LinkedList_char.h"

//Everything is the same with Queue.h execpt you are dealing with char not int.
class Queue_char: public LinkedList_char{
	public:
		Queue_char();
		~Queue_char();
		void enqueue (char valuePush); 
		char dequeue();
		char& front();
};

#endif
