#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,i;
	cin>>t;
	while(t--){
		
	cin>>n>>i;
	int f = 1;
	f = f<<i;
	int res  = n & f;
	if(res) cout<<"True"<<endl;
	else cout<<"false"<<endl;
//		cout<<n<<">>"<<i<<"="<<(n>>i); 		// (n =n>>i  === n/(2^i) )
	}
	return 0;
}
