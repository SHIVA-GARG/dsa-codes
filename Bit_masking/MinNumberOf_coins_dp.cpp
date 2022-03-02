int min(int a,int b){
	    return a<b?a:b;
	}
	int minCoins(int coins[], int m, int v) 
	{ 
	    int t[m+1][v+1];
	    for(int i=0;i<=m;i++)
	        t[i][0] = 0;
	   for(int j=0;j<=v;j++)
	    t[0][j] = inf;
	    for(int j=1;j<=v;j++){
	        if(j % coins[0] ==0){
	            t[1][j] = j/coins[0];
	        }
	        else
	            t[1][j] = inf;
	    }
	    for(int i=2;i<=m;i++){
	        for(int j=1;j<=v;j++){
	            if(coins[i-1] > j)
	                t[i][j] = t[i-1][j];
	           else
	            t[i][j]  = min(t[i-1][j],t[i][j-coins[i-1]]+1);
	        }
	    }
	    return t[m][v] == inf?-1:t[m][v];
	} 
