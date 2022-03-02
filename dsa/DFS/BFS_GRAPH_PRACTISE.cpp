#include<bits/stdc++.h>
using namespace std;







int a[8][8] = {
				{0,0,0,0,0,0,0,0},
				{0,0,1,1,1,0,0,0},
				{0,1,0,0,1,0,1,0},
				{0,1,0,0,1,0,0,0},
				{0,1,1,1,0,1,1,0},
				{0,0,0,1,1,0,1,1},
				{0,0,0,0,0,1,0,0},
				{0,1,0,0,0,1,0,0}
				};
int visited[8] = {0};

void bfs(int a[][8]){
	int u=1;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		u = q.front();
		q.pop();
		for(int v=1;v<8;v++){
			if(a[u][v] == 1 && visited[v] ==0){
				cout<<v<<" ";
				q.push(v);
				visited[v] =1;
			}
		}
	}
}

int main(){
	bfs(a);
	return 0;
}
