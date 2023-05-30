#include <iostream>
#include <string>
#include "Head.h"

using namespace std;

void BinaryTree::insert(int insertId){
	root = insertRecursive(root,insertId);
	
}
Node *BinaryTree::insertRecursive(Node *currentRoot,int insertId){
	
	if (currentRoot == NULL){
		currentRoot = new Node();
		currentRoot->id = insertId;
		return currentRoot;
	}
	if (insertId < currentRoot ->id){
		currentRoot->left = insertRecursive(currentRoot->left, insertId);
	}
	else if (insertId >  currentRoot->id){
		currentRoot->right = insertRecursive(currentRoot->right, insertId);
		
	}
	return currentRoot;
	
}



Node* BinaryTree::search(int val){
    Node* node = root;
    while (node != NULL) {
        if (node->id == val) {
            cout << "Node with value " << val << " found in the tree." << endl;
            return node;
        }
        if (val < node->id) {
            node = node->left;
        } else {
            node = node->right;
        }
    }
    cout << "Node with value " << val << " not found in the tree." << endl;
    return NULL;
}

 	

Node* BinaryTree::findMin() {
    Node* node = root;
    while (node != NULL && node->left != NULL) {
        node = node->left;
    }

    if (node != NULL) {
        cout << "Minimum value: " << node->id << endl;
    } else {
        cout << "Binary tree is empty." << endl;
    }

    return node;
}

Node* BinaryTree::findMax() {
    Node* node = root;
    while (node != NULL && node->right != NULL) {
        node = node->right;
    }

    if (node != NULL) {
        cout << "Maximum value: " << node->id << endl;
    } else {
        cout << "Binary tree is empty." << endl;
    }

    return node;
}

void BinaryTree::inOrder(){
	inOrderRecursive(root);
}

void BinaryTree::preOrder(){
	PreOrderRecursive(root);
}

void BinaryTree::postOrder(){
	PostOrderRecursive(root);
}
void BinaryTree::inOrderRecursive(Node *currentRoot){
	if(currentRoot != NULL){
		inOrderRecursive(currentRoot->left);
		cout<<currentRoot->id<<",";
		inOrderRecursive(currentRoot->right);
	}
	
}

void BinaryTree::PreOrderRecursive(Node *currentRoot){
	if(currentRoot != NULL){
		cout<<currentRoot->id<<",";
		inOrderRecursive(currentRoot->left);
		inOrderRecursive(currentRoot->right);
	}
	
}

void BinaryTree::PostOrderRecursive(Node *currentRoot){
	if(currentRoot != NULL){
		inOrderRecursive(currentRoot->left);
		inOrderRecursive(currentRoot->right);
		cout<<currentRoot->id<<",";
	}
	
}
