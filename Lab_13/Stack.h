#ifndef STACK_H
#define STACK_H

#include "LinkedList-1.h"  

template<class T>
class Stack : public LinkedList<T>    // Class declaration with parent class
{
public:           // all the functions of stack
   Stack();   // constuctor
   ~Stack();   // destructor
   void push(T value);   // adds element to stack
   T pop();       // deletes the top element and returns its value
   T& top();       // returns the top element in the stack
};

template<class T>
Stack<T>::Stack():LinkedList<T>(){}   // default constuctor

template<class T>
void Stack<T>::push(T value)       // function inserts the value to the top of the stack
{
   this->insertAtFront(value);       // calls linked list function to insert the value at the top of the stack
   return;           // ends the function
}

template<class T>
T Stack<T>::pop()       // function removes the top element in the stack
{
   T rem_val = this->first->val;   // create a placeholder to retain the value of the elment being removed
   this->removeFromFront();       // calls linked list function to remove the element at the top of the stack
   return rem_val;       // returns the value of the removed element
}

template<class T>
T& Stack<T>::top()       // returns the value at the top of the stack
{
   return this->first->val;
}


template<class T>
Stack<T>::~Stack(){}   // destructor

#endif // STACK_H
