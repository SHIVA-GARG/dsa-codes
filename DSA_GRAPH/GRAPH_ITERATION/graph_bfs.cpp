#include<BITS/STDC++.H>
using namespace std;


template <typename T>

class graph(){
	private:
		map<T,list<T>> adjlist;
	public:
		void addedge(T u,T v,bool bidir = true){
			adjlist[u].push_back(v);
			if(bidir)
				adjlist[v].push_back(u);
		}
		
		void bfs(int src)
		{
			queue<T> q;
			q.push(src);
			int size;
			for(auto row:adjlist)
				size++;
			
			vector<bool> visited(size,false);
			visited[src] = true;
			while(!q.empty()){
				int  node = q.front();
				cout<<node<<" ";
				q.pop();
				for(auto neighbour:adjlist(node)){
					if(!visited[neighbour]){
						q.push(neighbour);
						visited[neighbour] = true;
					}
				}
			}
		
				
		}
			
};

int main(){
	graph<int> g;
	g.addedge(0,1);
	g.addedge(0,2);
	g.addedge(0,3);
	g.addedge(1,3);
	g.addedge(2,3);
	g.bfs(1);
	//g.printlist();
	return 0;
}
