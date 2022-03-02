#include<iostream>
#include<cmath>
using namespace std;

class node{
	public:
		int data;
		node* next;
};

class hashtable{
	public:
		node** hash;
		hashtable();
		void insert(int);
		//int delete();
		void search(int);
};

hashtable::hashtable(){
		hash = new node*[10];
		for(int i =0;i<10;i++)
			hash[i] = NULL;
}

void hashtable::insert(int d){
	node* temp = new node;
	temp->data = d;
	int h = d%10;
	if( hash[h] == NULL){
		temp->next = NULL;
		hash[h] = temp;
		return;
	}
	else{
		node*p = hash[h];
		if(p->data>=d){
			temp->next = p;
			hash[h] = temp;
		}
		else{
			node* q = p;
			while(p&&p->data<d){
				q = p;
				p = p->next;
			}
			temp->next = p;
			q->next = temp;
		}
	}
}
void hashtable::search(int key){
	int h =key%10;
	node* p =hash[h];
	while(p){
		if(p->data == key){
			cout<<"key is found:";
			return;
		}
		p = p->next;
	}
	cout<<"not found.";
	return;
		
	
}

int main(){
	int a[] = {16,12,25,39,6,5,122,68,75};
	hashtable h1;
	int size = sizeof(a)/sizeof(a[0]);
	node** hash = new node*[9];
	for(int i=0;i<size;i++){
		h1.insert(a[i]);
	}
	h1.search(75);
}
