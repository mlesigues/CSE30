
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream> //don't forget to add this!
using namespace std;

// Representation of an element in the linked list
template<class T>
struct Node
{
    T val; // Value of the node
    Node *next; // Pointer to the next node
};

template<class T>
class LinkedList
{
    // Public Functions/Variables
    public:
        /* IMPLEMENT THESE FUNCTIONS FOR EXERCISE1 */
        LinkedList(); // Constructor
        ~LinkedList(); // Destructor
        void insertAtBack(T valueToInsert);
        bool removeFromBack();
        void print();
        bool isEmpty();
        int size();
        void clear();

        /* IMPLEMENT THSES FUNCTIONS FOR EXERCISE2 */
        void insertAtFront(T valueToInsert);
        bool removeFromFront();

        Node<T> *first; // Pointer pointing to the begining of the list
        Node<T> *last; // Pointer pointing to the end of the list
};

// Implement your functions here:

//from Lab8 Linkedlist.cpp and changed to suit this lab
template<class T>
LinkedList<T>::LinkedList() {
	first = 0;      //first and last are initalized
	last = 0;
}

template<class T>
LinkedList<T>::~LinkedList() {
	clear();           //destructor
}

template<class T>
void LinkedList<T>::insertAtBack (T valueToInsert) { //insert node at the end of list 
        Node<T> *temp= new Node<T>();     
        temp -> val= valueToInsert;               // temp points to value

        if (first == 0) {
                first = temp;//Check if first and last have nothing in the node
        }
        if (last == 0) {
                last = temp;
        } else {
                last -> next = temp;	//If first and last is not null, then last point to next = temp so last can be temp, which adds a node at the back
                last = temp;
        }
}

template<class T>
bool LinkedList<T>::removeFromBack() { //Removes the last element of list
        Node<T>* temp = first;				
        if(last == 0){
        		return false;	
        }
        if(first==last){		
        		delete first;	//since first is equal to last it does matter if its delete first or delete last
        		first = 0;
        		last = 0;
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
	if (first != 0) {
		Node<T>* temp = first; 
		while(temp != last){
			std::cout << temp -> val << ",";     //spacing the values evenly
			temp = temp -> next;
		}
	std::cout << temp -> val;
	} else 
		std::cout <<" ";
}

template<class T>
bool LinkedList<T>::isEmpty() {
        if (first == 0 ) {	//Will check if the node is empty, then return true or false
            return true;
        } else 
        	return false;
}

template<class T>
int LinkedList<T>::size() {
		Node<T> *temp;
		int counter = 1;					
		if(first == 0 && last == 0){
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
	if (first == 0){ // can set first and last on the same line
		first = temp;
	}
	if (last == 0){
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
	if (first == 0) {
		return false;
	}
	if (first == last) {
		delete first;
		first = 0;
		last = 0;
		return true;
	}
		temp = temp -> next;
		delete first;
		first = temp;
		return true;
}
	
#endif

