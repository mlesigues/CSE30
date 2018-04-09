#include <iostream>
#include "Queue_char.h"
#include "LinkedList_char.h"

using namespace std;

Queue_char::Queue_char()
{	
}

Queue_char::~Queue_char(){
	
}

void Queue_char:: enqueue(char valuePush){
	insertAtBack(valuePush);	//In a queue, elements are added to the back
}

char Queue_char::dequeue(){
	char n = first -> val;
	removeFromFront();			//To remove an element in a queue, element is remove form front
	return n;
}

char& Queue_char::front(){
	return first -> val; 
}
