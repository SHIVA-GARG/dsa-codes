#include<bits/stdc++.h>
using namespace std;

//ladder problem with top-down

int ways(int n,int k,int *memo){
	if(n==0){
		memo[n] = 1;
		return 1;
	}
	if(n<0)
		return 0;
	if(memo[n] != -1)
		return memo[n];
	int ans  = 0;
//	memo[n] = ways(n-1,memo)+ways(n-2,memo)+ways(n-3,memo);
	for(int j =1;j<=k;j++)
		ans += ways(n-j,k,memo);
//	memo[n] = ans;
	return memo[n]  = ans;
}

int waysbp(int n,int k){
	int *dp = new int[n];
	dp[0] = 1;
	for(int step =1;step<=n;step++){
		dp[step] = 0;
		for(int j = 1;j<=k;j++){
			if(step-j>=0){
				dp[step] += dp[step-j];
			}
		}
	}
	return dp[n];
}

int main(){
	int memo[8];
	for(int i=0;i<8;i++)
		memo[i] = -1;
	cout<<ways(7,2,memo)<<endl;
	cout<<waysbp(7,2);
	
	return 0;
}
