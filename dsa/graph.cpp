	#include<bits/stdc++.h>
	using namespace std;
	template<typename T>
	
	class graph{
		public:
			map<T,pair<T,int> > adjlist;
			
			void addEdge(T u,T v,int dis,bool birec =1){
				adjlist[u] = make_pair(v,dis);
				
				if(birec)
					adjlist[v] = make_pair(u,dis);
				
			}
			
			void print_adj()
			{
			    
				for(auto  a : adjlist)
				{
					cout<<a.first<<":";
					for(auto y : a.second)
						cout<<"( "<<y.first<<", "<<y.second<<"), ";
				}
			}
			
			void bfs(T src){
				queue<T> q;
				map<T,bool> visited;
				q.push(src);
				while(!q.empty()){
					T node = q.front(); q.pop();
					if(!visited[node]){
						cout<<node<<"->";
					}
					for(auto a:adjlist[node]){
						if(!visited[a.first])
							q.push(a.first);
					}
				}
			}
	};
	
	int main(){
		graph<char> g;
		g.addEdge('0','1',4,0); 
		g.addEdge('0', '7',8, 0);
		g.addEdge('1', '7',11, 0);
		g.addEdge('1', '2',8, 0);
		g.addEdge('7', '8',7, 0);
		g.addEdge('2', '8',2, 0);
		g.addEdge('8', '6',6, 0);
		g.addEdge('2', '5',4, 0);
		g.addEdge('6', '5',2, 0);
		g.addEdge('2', '3',7, 0);
		g.addEdge('3', '3',14, 0);
		g.addEdge('3', '4',9, 0);
		g.addEdge('5', '4',10, 0);
		g.addEdge('7', '6',1, 0);
		
		g.print_adj();
	}

