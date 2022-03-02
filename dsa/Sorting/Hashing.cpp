#include<iostream>
#include <vector>
#include <cmath>
#include<string>
using namespace std;

int main(){
	string s = "hello";
	int n = s.size();
//	cout<<n;
	int p =31;
	int m = 1e9+9;
	long long hash = 0;
	for(int i=0;i<n;i++){
		hash+=((s[i]-'a'+1)*pow(p,i));
		
	}
	cout<<hash%10;
	return 0;
}
