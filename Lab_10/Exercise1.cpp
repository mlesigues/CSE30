#include<iostream>
#include "Queue.h"
using namespace std;

int main()
{
	Queue Line;
	
	if(Line.isEmpty()==true){ //Check if the queue is empty with exceptions
		try
		{
			throw 2;
		} 
		catch (int error)
		{
			cout<<"The queue is empty."<<endl;
		}	
	} else{
		cout<<"The number "<<Line.dequeue()<<" is removed"<<endl; //If the queue is not empty, then dequeue will remove an element
		Line.print();
		cout<<"\n";
	}
	
	Line.enqueue(0); //Adding numbers to the queue
	Line.enqueue(1);
	Line.enqueue(2);
	
	Line.print(); //This will show the numbers that are in the queue so far. In this case, it will show 0,1,2
	cout<<endl;
	
	if(Line.isEmpty()==true){	//Catch exceptions again
		try
		{
			throw 2;
		} 
		catch (int error)
		{
			cout<<"exception"<<endl;
		}	
	} else{
		cout<<"The number "<<Line.dequeue()<<" is removed"<<endl;
		Line.print();
		cout<<"\n";
	}
	
	Line.enqueue(3);
	Line.enqueue(4);
	Line.enqueue(5);
	Line.enqueue(6);
	
	Line.print();
	cout<<endl;

	Line.enqueue(7);
	Line.enqueue(8);
	Line.enqueue(9);
	
	if(Line.isEmpty()==true){	//check the queue is empty so the function front can return the number
		try						//If the queue is empty, then it should throw and catch the execption
		{
			throw 2;
		} 
		catch (int error)
		{
			cout<<"exception"<<endl;
		}	
	} else{
			cout<<"The number in the front is "<<Line.front()<<endl; 
	}
	
	cout<<"Size is "<<Line.size()<<endl;
	Line.print();
	cout << endl;
	
	return 0;
}
