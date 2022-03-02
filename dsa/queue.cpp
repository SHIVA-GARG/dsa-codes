#include<iostream>
using namespace std;
class queue{
	private:
		int size,front,rear,*q;
	public:
		queue(int);
		void enque(int);
		int deque();
		bool isfull();
		bool isempty();
		void display();
};
queue::queue(int size){
	this->size = size;
	front = rear = 0;
	q = new int[size];
}
bool queue::isempty(){
	if(front == rear)
		return true;
	return false;
}
void queue::enque(int x){
	
//	if(isfull()){
//		cout<<"queue overflow";
//		return;
//	}
	q[rear++] = x;
}
int queue::deque(){

	if(isempty()){
		cout<<"queue underflow";
		return -1;
	}
	int x = q[front++];
	return x;
}

bool queue::isfull(){
	if(rear == size-1){
		return true;
	
	}
	return false;
}
void queue::display(){
	int j = front;
	while(j!=size){
		cout<<q[j++]<<" ";
	}
}
int main(){
	int a[ ]={1,3,5,7,9},size = 5;
	queue q(size);
	for(int i=0;i<size;i++){
		q.enque(a[i]);
	}
	int d = q.deque();
	cout<<"\n"<<d<<endl;
	q.display();
}
