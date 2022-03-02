#include<bits/stdc++.h>
using namespace std;

class graph{
	private:
		int V;
		list<int> *adjlist;
		bool *visited1;
	public:
		graph(int v){
			V = v;
			adjlist = new list<int>[V];
//			for(int i =0;i<V;i++)
//				visited1[i] = false;
		visited1 = new bool[V]{false};
		}
		void addedge(int u,int v,bool bidir){
			adjlist[u].push_back(v);
			if(bidir)
					adjlist[v].push_back(u);
		}
		void printlist(){
			for(int i=0;i<V;i++){
				cout<<i<<"->";
				for(int j:adjlist[i])
					cout<<j<<",";
				cout<<endl;
			}
		}
		
		void bfs(int src,int dest)
		{
			queue<int> q;
			q.push(src);
			int size;
//			for(auto row:adjlist)
//				size++;
			
			vector<bool> visited(V,false);
			vector<int> des(V,0);
			vector<int> parent(V,-1);
		
			visited[src] = true;
			while(!q.empty()){
				int  node = q.front();
				cout<<node<<" ";
				q.pop();
				for(auto neighbour:adjlist[node]){
					if(!visited[neighbour]){
						q.push(neighbour);
						visited[neighbour] = true;
						des[neighbour] = des[node]+1;
						parent[neighbour] = node;
					}
				}	
			}
			cout<<endl;
//			for(int i=0;i<V;i++)
//				cout<<i<<" node having distance of "<<des[i]<<endl;
//			cout<<endl;
			
			int temp = dest;
			while(temp != -1){
				cout<<temp<<"<-";
				temp = parent[temp];
			}			
		}
		void dfs(int src){
				visited1[src] = true;
				cout<<src<<" ";
				for(int neighbour:adjlist[src]){
					if(!visited1[neighbour])
						dfs(neighbour);
				}
				return;
		}
};

int main(){
	graph g(50);
//	g.addedge(0,1);
//	g.addedge(0,4);
//	g.addedge(1,2);
//	g.addedge(2,4);
//	g.addedge(2,3);
//	g.addedge(4,3);
//	g.addedge(3,5);
//	g.printlist();
//	cout<<endl;
	
	int board[36] = {0};
	board[2] = 13;
	board[5] = 2;
	board[17] = -13;
	board[18] = 11;
	board[24] = 16;
	board[25] = 10;
	board[32] = -2;
	board[5] = -22;
	
	for(int u=0;u<37;u++){
		for(int dice =1;dice<=6;dice++){
			int v = u+dice+board[u+dice];
			g.addedge(u,v,false);
		}
	}
	
	
	
	
	
	g.bfs(0,36);
	cout<<endl;
// 	g.dfs(0);
	return 0;
}
