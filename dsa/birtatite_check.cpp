#include<bits/stdc++.h>
using namespace std;
#define V 4
const int v = 4;
bool isbipartite(int g[][v],int src,vector<int> &color){
//	int src = 0;
	queue<int> q;
	q.push(src);
//	vector<int> color(v,-1);
	color[src] = 1;
	
	//BFS on graph
	
	while(!q.empty()){
		int u = q.front();
		q.pop();
		// check if there is any cyvle in graph
		// if cycle no barpatite
		if(g[u][u] == 1) 
		{
			cout<<"cycle present";
			return false;
		}
		for(int nr =0;nr<v;nr++){
			// if there is relation btw node and neighbours and not colored 
			// color neighbour with opposite of node
			if(g[u][nr] && color[nr] == -1){
				q.push(nr);
				color[nr] = 1-color[u];
			}
			// if neighbour is already colored with same color of node
			// can not be bipartite
			else if(g[u][nr] && color[nr] == color[u]){
				cout<<"nr:"<<nr<<" =u:"<<u;
				return false;
			}
		}
	}
	return true;
}

bool bipartite(int g[][v]){
	int src = 0;
	vector<int> color(v,-1);
	for(int i=0;i<v;i++){
		if(color[i] == -1){
			if(isbipartite(g,src,color) == false){
				return false;
			}
		}
	}
	return true;
}

int main(){
//	int v = 4;
	int g[][v] = {
					{0,1,0,1},
					{1,0,1,0},
					{0,1,0,1},
					{1,0,1,0},};
					
	if(bipartite(g)){
		cout<<"yes";
		return 0;
	}
	cout<<"No";
	return 0;
}
