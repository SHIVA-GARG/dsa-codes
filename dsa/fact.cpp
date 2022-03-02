#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,res=1;
	cin>>n;
	while(true){
		res=1;
		cin>>n;
		for(int i=2;i<=n;i++)
		res *= i;
		cout<<res<<endl;
	}
	
	
	return res;
}
