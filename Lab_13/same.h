#include "LinkedList-1.h"
#include <iostream>

using namespace std;

//from Lab8 Linkedlist.cpp and changed to suit this lab
template<class T>
LinkedList<T>::LinkedList() {
	first = NULL;      //first and last are initalized
	last = NULL;
}

template<class T>
LinkedList<T>::~LinkedList() {
	clear();           //destructor
}

template<class T>
void LinkedList<T>::insertAtBack (T valueToInsert) { //insert node at the end of list 
        Node<T> *temp= new Node<T>();     
        temp -> val= valueToInsert;               // temp points to value

        if (first == NULL) {
                first = temp;//Check if first and last have nothing in the node
        }
        if (last == NULL) {
                last = temp;
        } else {
                last -> next = temp;	//If first and last is not null, then last point to next = temp so last can be temp, which adds a node at the back
                last = temp;
        }
}

template<class T>
bool LinkedList<T>::removeFromBack() { //Removes the last element of list
        Node<T>* temp = first;				
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

template<class T>
void LinkedList<T>::print () {
	if (first != NULL) {
		Node<T>* temp = first; 
		while(temp != last){
			cout<<temp -> val << ",";     //spacing the values evenly
			temp = temp -> next;
		}
	cout << temp -> val;
	} else cout<<" ";
}

template<class T>
bool LinkedList<T>::isEmpty() {
        if (first == NULL ) {	//Will check if the node is empty, then return true or false
            return true;
        } else 
        	return false;
}

template<class T>
int LinkedList<T>::size() {
		Node<T> *temp;
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

template<class T>
void LinkedList<T>::clear() {		//Delete the list if the list is not empty 
		while(!isEmpty()){
			removeFromBack();
		}
}

template<class T>
void LinkedList<T>::insertAtFront(T valueToInsert) {  //works the same way as insertAtB

//exercise 2
	Node<T> *temp = new Node<T>();
	temp -> val = valueToInsert;
	if (first == NULL){ // can set first and last on the same line
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

template<class T>
bool LinkedList<T>::removeFromFront() {   //works the same way as removeFromBack
//exercise2
	Node<T> *temp = first;
	if (first == NULL) {
		return false;
	}
	if (first == last) {
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


