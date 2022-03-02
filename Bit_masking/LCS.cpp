#include<bits/stdc++.h>
using namespace std;

int max(int a,int b){
	return a>b?a:b;
}

void LCS(string s1,string s2,int n,int m){
	int t[n+1][m+1];
	string s;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(!i || !j)
				t[i][j] = 0;
			else if(s1[i-1] == s2[j-1]){
				t[i][j] = t[i-1][j-1]+1;
				s.push_back(s1[i-1]);
			}
			else
				t[i][j] = max(t[i-1][j],t[i][j-1]);
		}
	}
	cout<<endl<<s<<"("<< t[n][m]<<")";

}

int main(){
	string s1 = "abcefgh";
	string s2 = "akciezg";
	cout<<s1<<endl<<s2;
	LCS(s1,s2,s1.length(),s2.length());
	return 0;
	
}
