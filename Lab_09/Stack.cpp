#include <iostream>
#include "Stack.h"
#include "LinkedList.h"

using namespace std;

stack::stack()
{	
}

stack::~stack(){
	
}

void stack:: push(int valuePush){
	LinkedList::insertAtFront(valuePush);	
}

int stack::pop(){
	int n = first -> val;
	LinkedList::removeFromFront();
	return n;
}

 int& stack::top(){
	return first -> val;
}
