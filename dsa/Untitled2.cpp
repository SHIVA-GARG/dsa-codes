#include<iostream>
using namespace std;
class node{
	public:
		node* l;
		int data;
		node* r;
};
class queue{
	private:
		int front,rear,size;
		node** q;
	public:
		queue(int size);
		void enque(node*);
		node* deque();
		bool isempty();
		bool isfull();
};
queue::queue(int size){
	this->size = size;
	front =  rear = -1;
	q = new node*[size];
}
void queue::enque(node* t){
	if(rear == size-1){
		cout<<"queue overflow";
		return;
	}
	q[++rear] = t;
	
}
node* queue::deque(node* t){
	if(rear == front){
		cout<<"queue underflow";
		return NULL;
	}
	return q[++front];
}

bool queue::isfull(){
	if(rear == size-1){
		return true;
	}
	return false;
	
}
bool queue::isempty(){
	if(rear == front){
		return true;
	}
	return false;
	
}
node* root = new node;
void createtree(){
	int x;
	cout<<"enter root value:";
	cin>>x;
	queue q(10);
	q.enque(root);
	while(!q.isempty()){
		p =q.deque();
		cout<<"enter left child of"<<p->data<<":"<<;
		cin>>x;
		if(x!=-1){
			
		}
	}
	
}
