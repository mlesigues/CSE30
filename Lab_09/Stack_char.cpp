#include <iostream>
#include "Stack_char.h"
#include "LinkedList_char.h"

using namespace std;

Stack_char::Stack_char()
{	
}

Stack_char::~Stack_char(){
	
}

void Stack_char:: push(char valuePush){
	LinkedList_char::insertAtFront(valuePush);	
}

char Stack_char::pop(){
	char n = first -> val;
	LinkedList_char::removeFromFront();
	return n;
}

char& Stack_char::top(){
	return first -> val;
}
