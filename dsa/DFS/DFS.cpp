#include<iostream>
using namespace  std;
#define size 8

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
int visited[size] = {0};
				
void DFS(int u){
	if(visited[u]==0){
		cout<<u<<",";
		visited[u] = 1;
		for(int v=1;v<size;v++){
			if(a[u][v] == 1&&visited[v] ==0)
				DFS(v);
		}
	}
}

int main(){
	int x = 0;
	cout<<"node value:";
	cin>>x;
	DFS(x);
//	cout<<"for exit select 0";
	return 0;
}
