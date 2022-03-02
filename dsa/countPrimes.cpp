#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    if(n ==1 ) return false;
    // if( n==2) return f;
    
    for(int i=2;i*i<=n;i++){
        if(n % i == 0) return false;
    }
    return true;
}

int countPrimes(int n) {
        int cnt = 0;
        while(n){
            if(isprime(n)) {cout<<n<<" ";cnt++;}
            n--;
        }
        return cnt;
    }
    
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int cnt = countPrimes(n);
		cout<<'\t'<<cnt;
		cout<<endl;
	}
	return 0;
}
