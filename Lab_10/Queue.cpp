#include <iostream>
#include "Queue.h"
#include "LinkedList.h"
//throw exception here//

using namespace std;

Queue::Queue()
{	
}

Queue::~Queue(){
	
}

void Queue:: enqueue(int value){
	insertAtBack(value);	//Add new element from the back of the queue
}

int Queue::dequeue(){ //throw function here, catch function on main
	int n = first -> val;	
	removeFromFront();		//If the dequeue function appears, you take the first number and return the value
	return n;				//Ex: 0 is the first number in the queue. If there is a function call dequeue, then it output 0 and remove from the queue contents.
}

int& Queue::front(){
	return first -> val;	//Should get the number that is inputted first
}
