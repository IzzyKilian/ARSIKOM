#include <iostream>
#include <string>
#include "Head.h"

using namespace std;

int main(){
	
	int val;
	BinaryTree bin;
	
	bin.insert(10);
	bin.insert(5);
	bin.insert(2);
	bin.insert(7);
	bin.insert(15);
	bin.insert(20);
	bin.insert(17);
	bin.insert(25);
	bin.insert(30);

	cout << "\nPre Order\n";
	bin.preOrder();
	cout << "\nIn Order\n";
	bin.inOrder();
	cout << "\nPost Order\n";
	bin.postOrder();
	
	
	cout<<endl<<endl<<"Search a value from the tree: ";
	cin >> val;
	bin.search(val);
	
	bin.findMin();
	bin.findMax();	
	return 0;
}
