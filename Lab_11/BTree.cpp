#include "BTree.h"
#include <iostream>

using namespace std;

BTree::BTree() { //constructor, binary tree is empty
	root = NULL;
}

BTree::~BTree() { //destructor, deletes entire binary tree
	destroy_tree();
}

Node *BTree::BTree_root() { //pointer to the root 
	return root;
}

void BTree::destroy_tree(Node *leaf) { //recursive function that destroys subtree
	if(leaf != NULL) { //if leaf exists, destroy left & right child nodes
		destroy_tree(leaf -> left);
		destroy_tree(leaf -> right);
		delete leaf;
	}
}

void BTree::insert(int key, Node *leaf) {
	if (key < leaf -> key_value) {
		if (leaf -> left != NULL)
			insert(key, leaf -> left); //recursive function
		else {
			leaf -> left = new Node;
			leaf -> left -> key_value = key;
			leaf -> left -> left = NULL; //begins left child of child node to null
			leaf -> left -> right = NULL; //sets right child of child node to null
		}
	} else if(key >= leaf -> key_value) {
		if (leaf -> right != NULL)
			insert(key, leaf -> right);
		else {
			leaf -> right = new Node;
			leaf -> right -> key_value = key;
			leaf -> right -> left = NULL; //vice versa
			leaf -> right -> right = NULL; //vice versa
		} 
	}
}

Node *BTree::search(int key, Node *leaf) {
	if (leaf != NULL) {
		if (key == leaf -> key_value)
			return leaf;
		if (key < leaf -> key_value)
			return search(key, leaf -> left); //left child node of leaf
		else
			return search(key, leaf -> right); //right child node of leaf
	}
	else return NULL; //reaches the end of the tree but no key is found
}

void BTree::insert(int key) {
	if (root != NULL)
		insert(key, root);
	else { //if tree is empty
		root = new Node;
		root -> key_value = key;
		root -> left = NULL;
		root -> right = NULL;
	}
}

Node *BTree::search(int key) {
	return search(key, root);
}

void BTree::destroy_tree() {
	destroy_tree(root);
}




