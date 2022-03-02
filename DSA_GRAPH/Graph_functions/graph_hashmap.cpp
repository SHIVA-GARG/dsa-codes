#include<iostream>
#include<list>
#include<map>
#include<cstring>
using namespace std;

template<typename T>

class graph{
	private:
		map<T,list<T>> adjlist;
	public:
		void addedge(T u,T v,bool bidir  = true){
			adjlist[u].push_back(v);
			if(bidir)
				adjlist[v].push_back(u);
		}
		void printlist(){
			for(auto row:adjlist){
				T key = row.first;
				cout<<key<<"->";
				for(T element:row.second)
					cout<<element<<",";
				cout<<endl;
			}
		}
};

int main(){
	graph<string> g;
	g.addedge("amr","jai");
	g.addedge("amr","del");
	g.addedge("amr","sia");
	g.addedge("del","sia");
	g.addedge("del","agr");
	g.printlist();
	
	
	return 0;
}
