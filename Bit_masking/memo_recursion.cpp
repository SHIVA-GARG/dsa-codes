#include<iostream>
#include<vector>
#define ll long long
using namespace std;

ll fib(int n,ll *memo){
	if(n<=1){
		memo[n] = n;
		return n;
	}
	if(memo[n] != -1)
		return memo[n];
	else{
		memo[n] = fib(n-1,memo)+fib(n-2,memo);
		return memo[n];
	}
}

int main(){

	long long memo[101];
	for(int i=0;i<101;i++)
		memo[i] = -1;
//	vector<int> memo(101,-1);
	cout<<fib(10,memo);
	return 0;
}
