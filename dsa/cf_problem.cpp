#include<iostream>
#define lli long long int
#define mod 100000000
using namespace std;

int limit_h=0,limit_f=0;


lli dp[101][101][11][11];

int getAns(int n1,int n2,int k1,int k2){
	if((n1+n2) == 0) return 1;
	
	if(dp[n1][n2][k1][k2] != -1) return dp[n1][n2][k1][k2];
	
	int x = 0;
	if(n1 >0 && k1>0) x = getAns(n1-1,n2,k1-1,limit_h);
	
	int y = 0;
	if(n2 >0 && k2>0) y = getAns(n1,n2-1,limit_f,k2-1);
	
	return dp[n1][n2][k1][k2] = (x+y) % mod;
}
int main(){
	int n1,n2,k1,k2;

	

		cin>>n1>>n2>>limit_f>>limit_h;
		
		for(int i=0;i<=n1;i++){
			for(int j=0;j<=n2;j++){
				for(int k=0;k<=limit_f;k++){
					for(int l=0;l<=limit_h;l++){
						dp[i][j][k][l] = -1;
					}
				}
			}
		}
		cout<<getAns(n1,n2,limit_f,limit_h);
	
	return 0;
}
