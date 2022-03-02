

#include <iostream>

using namespace std;

unsigned long long fact(int x){
	if(x==1)
		return 1;
	return x*fact(x-1);
}

int main() {
	int num;
	cin >> num;
	while(num--){
		int x;
		cin>>x;
		cout<<fact(x)<<endl;
	}									
}



