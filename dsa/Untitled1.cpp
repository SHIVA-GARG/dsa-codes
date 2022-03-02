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
		queue(int);
		bool isempty();
		bool isfull();
		void enque(node*);
		node* deque();
};
queue::queue(int size){
	this->size = size;
	front = rear = -1;
	q = new node*[size];
}
bool queue::isempty(){
	if(front == rear)
		return true;
	return false;
}
bool queue::isfull(){
	if(rear == size-1)
		return true;
	return false;
}
void queue::enque(node *z){
	if(isfull()){
		cout<<"queue overflow\n";
		return ;
	}
	q[++rear] = z;
}
node* queue::deque(){
	if(isempty()){
		cout<<"queue underflow\n";
		return NULL;
	}
	//de *x = ;
	return q[++front];
}
class stack{
	private:
		int data;
		int top,size;
		node** q;
	public:
		stack(int);
		node* push(node* t);
		node* pop();
		bool isempty();
		bool isfull();
		node* attop();
};
stack::stack(int size){
	this->size = size;
	top = -1;
	q = new node*[size];
}
node* stack::push(node* t){
	if(top== size-1){
		cout<<"staack overflow";
		return NULL;
	}
	q[++top] = t;
	cout<<"push functionrun";
	 
}
node* stack::pop(){
	if(top == -1){
		cout<<"staAHSDJder flow";
		return NULL;
	}
	node* x = q[top--];
	return x;
}
bool stack::isempty(){
	if(top == -1)
		return true;
	return false;
}
bool stack::isfull(){
	if(top == size-1)
		return true;
	return false;
}
node* stack::attop(){
	if(top == -1)
	{
		cout<<"staCDKunder flow";
		return NULL;
	}
	else if(top == size-1)
	{
		cout<<"stack over flow";
		return NULL;
	}
	else{
		return q[top];
	}
}


node* root = new node;
void createtree(){
	int x;
	queue z(10);
	cout<<"enter root value:";
	cin>>x;
	root->data = x;
	root->l = root->r = NULL;
	z.enque(root);
	
	while(!z.isempty()){
		node* p = z.deque();
		cout<<"enter left child of "<<p->data<<":";
		cin>>x;
		if(x!=-1){
			node* t = new node;
			t->data = x;
			t->l = t->r = NULL;
			p->l = t;
			z.enque(t);
		}
		cout<<"enter right child of "<<p->data<<":";
		cin>>x;
		if(x!=-1){
			node* t = new node;
			t->data = x;
			t->l = t->r = NULL;
			p->r = t;
			z.enque(t);
		}
	}
	
	
	
}
void preorder(node *p){
		if(p){
			cout<<p->data<<",";
			preorder(p->l);
			preorder(p->r);
		}
}
void inorder(node *p){
	if(p){
		inorder(p->l);
		cout<<p->data<<',';
		inorder(p->r);
	}
}
void postorder(node *p){
	if(p){
		postorder(p->l);
		postorder(p->r);
		cout<<p->data<<',';
	}
}
void preorder1(node* t){
	stack s(100);
	while(t!=NULL||!s.isempty()){
		cout<<"hello";
		if(!t){
			cout<<t->data;
			s.push(t);
			t = t->l;
			cout<<s.attop()->data;
			
		}
		else{
			cout<<"in else part";
			t = s.pop();
			t = t->r;
		}
	}
}
int main(){
	createtree();
	preorder1(root);
//	preorder(root);cout<<endl;
//	inorder(root);cout<<endl;
//	postorder(root);
}
