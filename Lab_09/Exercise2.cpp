#include <iostream>

#include "Stack_char.h"

using namespace std;

int main(){
	
	Stack_char s;
	
	cout << endl << "-----------------------------------------------------------------" << endl;
	cout << "Function Call" << "\t" << "| Output" << "\t" << "| Stack Contents" << endl;
	cout << "-----------------------------------------------------------------" << endl;
	
	cout << "isEmpty()" << "\t" << "| "; 
	if(s.isEmpty())
		cout << "true"; 
	else
		cout << "false";
	cout << "\t\t" << "| ";
	s.print();
	cout << endl;
	cout << "-----------------------------------------------------------------" << endl;
	
	s.push('A');
	cout << "push(A)" << "\t\t" << "| " << "\t\t" << "| ";
	s.print();
	cout << endl;
	cout << "-----------------------------------------------------------------" << endl;
	
	s.push('Y');
	cout << "push(Y)" << "\t\t" << "| " << "\t\t" << "| "; 
	s.print();
	cout << endl;
	cout << "-----------------------------------------------------------------" << endl;

	cout << "size()" << "\t\t" << "| " << s.size() << "\t\t" << "| ";
	s.print();
	cout << endl;
	cout << "-----------------------------------------------------------------" << endl;
	
	cout << "pop()" << "\t\t" << "| " << s.pop() << "\t\t" << "| "; 
	s.print();
	cout << endl;
	cout << "-----------------------------------------------------------------" << endl;
	
	cout << "isEmpty()" << "\t" << "| "; 
	if(s.isEmpty())
		cout << "true"; 
	else
		cout << "false";
	cout << "\t\t" << "| ";
	s.print();
	cout << endl;
	cout << "-----------------------------------------------------------------" << endl;
	
	s.push('D');
	cout << "push(D)" << "\t\t" << "| " << "\t\t" << "| ";
	s.print();
	cout << endl;
	cout << "-----------------------------------------------------------------" << endl;
	
	cout << "top()" << "\t\t" << "| " << s.top() << "\t\t" << "| ";
	s.print();
	cout << endl;
	cout << "-----------------------------------------------------------------" << endl;
	
	s.push('T');
	cout << "push(T)" << "\t\t" << "| " << "\t\t" << "| ";
	s.print();
	cout << endl;
	cout << "-----------------------------------------------------------------" << endl;
	
	cout << "pop()" << "\t\t" << "| " << s.pop() << "\t\t" << "| "; 
	s.print();
	cout << endl;
	cout << "-----------------------------------------------------------------" << endl << endl;
	
	return 0;
}
