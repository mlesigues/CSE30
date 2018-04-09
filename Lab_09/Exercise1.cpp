#include <iostream>
#include "Stack.h"

using namespace std;

int main(){
	
	stack s;	
	
	for(int i = 10; i > 0; i--){
		s.push(i);
		cout << "Item " << i << " successfully added to the stack." << endl; 
	}	
	
	cout << "The value at the top of the Stack is: " << s.top() << endl;
		
	cout << "There are " << s.size() << " values in the stack" << endl;
		
	if(!s.isEmpty()){
		cout << "The stack is NOT empty." << endl;
		
	} else
		cout << "The stack IS empty." << endl;
	
	cout << "Here's the stack: [";
	s.print();
	cout << "]" << endl;
		
	while(!s.isEmpty()){
		cout << "Item " << s.pop() << " successfully popped." << endl;
		
		cout << "Here's the stack: [";
		s.print();
		cout << "]" << endl;
	}
	
	if(!s.isEmpty())
		cout << "The stack is NOT empty." << endl;
	else {
		cout << "The stack IS empty." << endl;
	}
	
	if(s.isEmpty())
		cout << "Test successful." << endl;
	else
		cout << "Test Failed!" << endl;
	
	return 0;
}
