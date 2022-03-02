#include<bits/stdc++.h>
using namespace std;

class graph{
	int v;
	list<int> *adj;
	public:
		graph(int n);
		void addEdge(int u,int v);
		void bfs(int s);
};

graph::graph(int n){
	v = n;
	adj = new list<int>[v];
	
}

void graph::addEdge(int u,int v){
	adj[u].push_back(v);
}

void graph::bfs(int s){
	bool *visited = new bool[v];

	for(int i=0;i<v;i++)
		visited[i] = false;

	list<int> queue;
	list<int>::iterator i;
	queue.push_back(s);

	while(!queue.empty()){
		s = queue.front();
		cout<<s<<" ";
		queue.pop_front();

		for(i = adj[s].begin();i!=adj[s].end();i++){
			if(visited[*i] == false){
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
		
	}
}
int main(){
	graph g(4);
	g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.bfs(2);
 
    return 0;
}
