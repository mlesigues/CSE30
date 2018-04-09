#include<iostream>
#include"Queue_char.h"
using namespace std;

int main()
{
	Queue_char Line;
	
	cout<<"Function Call \t\t"<<"Output \t\t"<<"Front Queue Rear"<<endl;
	
	cout<<"dequeue()\t\t";	
	if(Line.isEmpty()==true){	//Need to check if the queue is empty or else the program will crash
		try
		{
			throw 2;
		} 
		catch (int error)
		{
			cout<<"exception"<<endl;
		}	
	} else{
		cout<<Line.dequeue();	
		cout<<"\t\t";
		Line.print();
		cout<<"\n";
	}
	
	cout<<"enqueue(D)\t\t";		//character D is added to the queue
	Line.enqueue('D');
	cout<<"\t\t";
	Line.print();
	cout<<"\n";
	
	cout<<"enqueue(A)\t\t";	//character A is added to the queue
	Line.enqueue('A');
	cout<<"\t\t";
	Line.print();
	cout<<"\n";
	
	cout<<"dequeue()\t\t";	//character that is in front of the queue is removed
	if(Line.isEmpty()==true){	//Check if queue is empty 
		try
		{
			throw 2;
		} 
		catch (int error)
		{
			cout<<"exception"<<endl;
		}	
	} else{
		cout<<Line.dequeue();
		cout<<"\t\t";
		Line.print();
		cout<<"\n";
	}
	
	cout<<"size()\t\t\t";	//Check to the size of the queue
	cout<<Line.size();
	cout<<"\t\t";
	Line.print();
	cout<<"\n";
	
	cout<<"enqueue(D)\t\t";		//character D is added to the queue
	Line.enqueue('D');
	cout<<"\t\t";
	Line.print();
	cout<<"\n";
	
	cout<<"isEmpty()\t\t";		//Check if the queue is empty again
	if(Line.isEmpty() == false){
		cout<<"false";
	} else
		cout<<"true";
	cout<<"\t\t";
	Line.print();
	cout<<"\n";
	
	cout<<"front()\t\t\t";    //The character that is first in the queue is printed out
	cout<<Line.front();
	cout<<"\t\t";
	Line.print();
	cout<<"\n";
	
	cout<<"enqueue(T)\t\t";		//character T is added to the enqueue
	Line.enqueue('T');
	cout<<"\t\t";
	Line.print();
	cout<<"\n";
	
	cout<<"front()\t\t\t";    //The character that is first in the queue is printed out
	cout<<Line.front();
	cout<<"\t\t";
	Line.print();
	cout<<"\n";
	
	return 0;
	
}
