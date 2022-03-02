	#include<bits/stdc++.h>
	using namespace std;
	
	int n;
	char ar[31][31];
	bool vis[31][31];
	int dis[31][31];
	
	int xplus[] = {0,0,1,-1};
	int yplus[] = {-1,1,0,0};
	
	bool isValid(int x,int y){
		if(ar[x][y] == 'T' || vis[x][y] == true) return false;
		
		if(x <1 || y<1 || x>n || y > n) return false;
		
		return true;
	}
	
	void bfs(int sx,int sy){
		queue<pair<int,int> > q;
		q.push(make_pair(sx,sy));
		
		vis[sx][sy] = true;
		dis[sx][sy] = 0;
		
		while(!q.empty()){
			int x = q.front().first;
			int y = q.front().second;
			int d = dis[x][y];
			q.pop();
			
			for(int i=0;i<4;i++){
				int newx = x + xplus[i];
				int newy = y + yplus[i];
				
				if(isValid(newx,newy)){
					vis[newx][newy] = true;
					dis[newx][newy] = d +1;
					q.push(make_pair(newx,newy));
				}
			}
		}
	}
	
	int main(){
		
		int sx,sy,ex,ey;
		cin>>n;
		
	
		
		
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				
				cin>>ar[i][j];
				if(ar[i][j] =='S')
					sx = i,sy = j;
				
				if(ar[i][j] == 'E')
					ex = i,ey = j;
				
			}
		}
//		cout<<"hello";
		bfs(sx,sy);
		cout<<dis[ex][ey];
		return 0;
	}
