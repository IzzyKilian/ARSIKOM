#include <iostream>
#include <string>

using namespace std;

class Node{
		public:
			int id;
			string name;
			Node *left;
			Node *right;
			
			Node(){
				left = right = NULL;
			}
			
};
class BinaryTree{
		public:
			Node *root;
			
			void insert(int);
			Node *insertRecursive(Node*, int);
			void deleteNode(int);
			void preOrder();
			void inOrder();
			void postOrder();
			void inOrderRecursive(Node*);
			void PreOrderRecursive(Node*);
			void PostOrderRecursive(Node*);
			
			
			Node *search(int);	
			Node *findMin();
			Node *findMax();
				
			BinaryTree(){
				root = NULL;
			}
};
