#ifndef LINKEDLIST_char_H 
#define LINKEDLIST_char_H

using namespace std; 

// Representation of an element in the linked list
struct Node 
{
    char val; // Value of the node
    Node *next; // Pointer to the next node
};

class LinkedList_char
{
    // Public Functions/Variables
    public:
        /* IMPLEMENT THESE FUNCTIONS FOR EXERCISE1 */
        LinkedList_char(); // Constructor
        ~LinkedList_char(); // Destructor
        void insertAtBack(char valueToInsert);
        bool removeFromBack();
        void print();
        bool isEmpty();
        int size(); //To count the amount of character in the stack it have to be int
        void clear();

        /* IMPLEMENT THSES FUNCTIONS FOR EXERCISE2 */
        void insertAtFront(char valueToInsert);
        bool removeFromFront();

        Node *first; // Pointer pointing to the begining of the list
        Node *last; // Pointer pointing to the end of the list
};

#endif
