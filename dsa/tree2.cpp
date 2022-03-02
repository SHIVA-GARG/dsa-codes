#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node*l;
		node* r;
};

class queue{
	private:
		int size,front,rear;
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

void queue::enque(node* x){
	if(isfull()){
		cout<<"queue overflow";
		return;
	}
	else{
		q[++rear] = x;
	}
}

node* queue::deque(){
	if(isempty()){
		cout<<"queue underflow";
		return NULL;
	}else{
		return q[++front];
	}
	
		}


node* root= new node;
void creattree(){
	int x;
	queue q1(10);
	cout<<"enter root value:";
	cin>>x;
	root->data = x;
	root->l= root->r = NULL;
	q1.enque(root);
	while(!q1.isempty()){
		node* p = q1.deque();
		cout<<"enter left child of "<<p->data<<":";
		cin>>x;
		if(x!=-1){
			node* t = new node;
			t->data = x;
			t->l= t->r = NULL;
			p->l= t;
			q1.enque(t);
		}
		cout<<"enter right child of "<<p->data<<":";
		cin>>x;
		if(x!=-1){
			node* t = new node;
			t->data = x;
			t->l= t->r = NULL;
			p->r = t;
			q1.enque(t);
		}
	}
}


void preorder(node *x){
	if(x){
		cout<<x->data<<' ';
		preorder(x->l);
		preorder(x->r);
	}
}

void inorder(node *x){
	if(x){
		inorder(x->l);
		cout<<x->data<<' ';
		inorder(x->r);
	}
}

void postorder(node *x){
	if(x){
		postorder(x->l);
		postorder(x->r);
		cout<<x->data<<' ';
		
	}
}

void levelorder(node* p){
	cout<<p->data<<",";
	queue q(10);
	q.enque(p);
	while(!q.isempty()){
		node* p = q.deque();
		if(p->l->data != -1){
			cout<<p->l->data<<",";
			q.enque(p->l);
		}
		if(p->r->data !=-1){
			cout<<p->r->data<<",";
			q.enque(p->r);
		}
	}
}

int count(node* p){
	int x,y;
	if(p){
		x = count(p->l);
		y = count(p->r);
		return x+y+1;
	}
	return 0;
}

void search(int x,node* p){
	if(p == NULL)
	{
		cout<<"not in the tree";
		return;
	}
	if(x == p->data){
		cout<<"found";
		return;
	}
	else if(x<p->data)
		search(x,p->l);
	else if(x>p->data)
		search(x,p->r);
}

node* insert(int x,node* p){
	node* t = NULL;
	if(p == NULL){
		cout<<"in null root";
		node* m = new node;
		m->data = x;
		m->l = m->r = NULL;
		p = m;
		return p;
	}
	while(p){
		if(x == p->data){
			cout<<"\n can't be inserted same value is found.";
			return p;
		}
		else if(x < p->data){
			t = p;
			p = p->l;
		}
		else if(x > p->data){
			t = p;
			p = p->r;
		}
	}
	if(x < t->data){
		node* m = new node;
		m->data = x;
		m->l = m->r = NULL;
		t->l = m;
	}
	else{
		node* m = new node;
		m->data = x;
		m->l = m->r = NULL;
		t->r = m;
	}
}

node* Rinsert(int x,node* p){
	//cout<<"enters in Rinsert function.\n";
	node* t = NULL;
	if(p == NULL){
		cout<<"\np was null";
		t = new node;
		t->data = x;
		t->l= t->r = NULL;
//		p = t;
		return t;
	}
	else if(x < p->data)
		p->l= Rinsert(x,p->l);
	else if(x>p->data)
		p->r = Rinsert(x,p->r);
	return p;
}
node* v = NULL;
int main(){
	
	v = Rinsert(30,v);
	Rinsert(20,v);
	Rinsert(40,v);
	Rinsert(10,v);
	cout<<"\ninorder:";
	inorder(v);
	
//	creattree();
//	cout<<"no. of nodes:"<<count(root);
//	cout<<'\n';
//	search(25,root);
//	cout<<"\npreorder:";
//	insert(25,root);
//	preorder(root);
//	cout<<"]\ninorder:";
//	inorder(root);
//	cout<<"\npostorder:";
//	postorder(root);
//	cout<<"\nlevelorder:";
//	levelorder(root);
	
	return 0;
}
