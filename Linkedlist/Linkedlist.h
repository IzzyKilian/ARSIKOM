class Node{
	public:
		int  val;
		Node *next;
		
		Node(){
			next =NULL;
		}
};

class LinkedList{
	public:
		Node *head;
		Node *tail;
		
		void insertToHead(int);
		void insertToTail(int);
		void insertAfter(int, int);
		
		void deleteFromHead(int);
		void deleteFromTail(int);
		void deleteByValue(int);
		
		void printAll();
		
		LinkedList(){
			head=tail=NULL;
		}
};
