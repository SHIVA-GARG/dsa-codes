#include<bits/stdc++.h>
using namespace std;

// 1st method
int totalSetBits1(int n){
	int count = 0;
	while(n > 0){
		if(n & 1) count++;
		n = n>>1;
	}
	return count;
}

// 2nd method
int totalSetBits2(int n){
	int count =0;
	while(n > 0){
		count++;
		n = n&(n-1);
	}
	return count;
}


int main(){
	int t,n,i;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<"total bits in "<<n<<" = "<<totalSetBits2(n)<<endl;
	}
	return 0;
}




