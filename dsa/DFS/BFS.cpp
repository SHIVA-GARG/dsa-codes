#include<iostream>
#define coloum 8
using namespace std;

class queue{
	private:
		int size,front,rear;
		int *b;
	public:
		queue(){
			b = new int(coloum);
			size = coloum;
			front = -1;
			rear = -1;
			b[coloum] = {0};
		}
		bool isempty();
		void enque(int n);
		int deque();
}q;

bool queue::isempty(){
	if(front == rear)
		return true;
	return false;
}

void queue::enque(int x){
	if(rear == size-1){
		cout<<"queue overflow";
		return;
	}
	b[++rear] = x;
}

int queue::deque(){
	if(isempty()){
		cout<<"queue underflow";
		return -1;
	}
	return b[++front];
}

int a[8][8] = {
				{0,0,0,0,0,0,0,0},
				{0,0,1,1,1,0,0,0},
				{0,1,0,0,1,0,0,0},
				{0,1,0,0,1,0,0,0},
				{0,1,1,1,0,1,0,0},
				{0,0,0,1,1,0,1,1},
				{0,0,0,0,0,1,0,0},
				{0,0,0,0,0,1,0,0}
				};
int visited[coloum] = {0};


void BFS(int i){
	cout<<i<<",";
	visited[i] = 1;
	q.enque(i);
	while(!q.isempty()){
		int u = q.deque();
		for(int v=1;v<coloum;v++){
			if(a[u][v]==1&&visited[v]==0){
				cout<<v<<",";
				visited[v] =1;
				q.enque(v);
			}
		}
	}
}


int main(){
	int x;
	cout<<"enter node:";
	cin>>x;
	BFS(x);
	return 0;
}
