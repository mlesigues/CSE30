#ifndef stack_h 
#define stack_h
#include "LinkedList.h"


class stack: public LinkedList{
	public:
		stack();
		~stack();
		void push (int valuePush);
		int pop();
		int& top();
};

#endif
