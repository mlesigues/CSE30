#include "LinkedList.h"
#include<iostream>

using namespace std;

LinkedList::LinkedList()
{
	first = NULL;      //first and last are initalized
	last = NULL;
}

LinkedList::~LinkedList()
{
	clear();           //destructor is here to get rid of extra stuff after all the node is check
}

void LinkedList::insertAtBack (int initialValue) //adding node at the back
{
        Node*temp = new Node();     
        temp -> val= initialValue;               // temp points to value

        if (first == NULL)
        {
                first = temp;					//Check is first and last have nothing in the node
        }
        if (last == NULL)
        {
                last = temp;
        }
        else {
                last -> next = temp;	//If first and last is not null, then last point to next = temp so last can be temp, which adds a node at the back
                last = temp;
        }
}

bool LinkedList::removeFromBack()
{
        Node*temp = first;				
        if(last == NULL){
        		return false;	
        }
        if(first==last){		
        		delete first;	//since first is equal to last it does matter if its delete first or delete last
        		first = NULL;
        		last = NULL;
        		return true;
        }
		while(temp -> next != last){
                temp = temp -> next;   //check until next = last
        }
                delete last;		   //After the while loop exit, the last node delete so the temp node is the new last node
                last = temp;  
                return true;
}

void LinkedList::print ()
{
	if (first != NULL){
		Node* temp = first; 
		while(temp != last){
			cout<<temp -> val << ",";     //spacing the values evenly
			temp = temp -> next;
		}
	cout<<temp -> val;
	}
	else cout<<" ";
}

bool LinkedList::isEmpty()
{
        if (first == NULL ) {			//If the node is empty, then return true or false
            return true;
        } else 
        	return false;
}

int LinkedList::size()
{
		Node *temp;
		int counter = 1;					
		if(first == NULL && last == NULL){
			return 0;
		}
		else {
			temp = first;
		while (temp != last){		//if temp is not last, then it will go down the list to count how long it is
			temp = temp -> next;
			counter++;				//counter add by 1
		}
	}
	return counter;
}

void LinkedList::clear()		//Once again delete the list if the list is not empty
{
		while(!isEmpty()){
			removeFromBack();
		}
}

void LinkedList::insertAtFront(int initialValue)  //works the same way as insertAtBack
{ 												 //exercise 2
	Node*temp = new Node();
	temp -> val = initialValue;
	if (first == NULL){
		first = temp;
	}
	if (last == NULL){
		last = temp;
	}
	else{
		temp -> next = first;
		first = temp;
	}
}

bool LinkedList::removeFromFront()   //works the same way as removeFromBack
{ 									//exercise2
	Node*temp = first;
	if (first == NULL){
		return false;
	}
	if (first == last){
		delete first;
		first = NULL;
		last = NULL;
		return true;
	}
		temp = temp -> next;
		delete first;
		first = temp;
		return true;
}
