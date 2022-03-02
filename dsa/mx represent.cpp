#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int mx[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>mx[i][j];
		}
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<mx[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
