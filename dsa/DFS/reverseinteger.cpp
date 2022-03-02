#include<iostream>
using namespace std;

int y = 0;

int reverse(int x){
	y = (y+x%10)*10;
	if(x /10 == 0)
		return y/10;
	return reverse(x/10);
}

int main(){
	int x;
	cout<<"enter no.:";
	cin>>x;
	cout<<reverse(x);
	return 0;
}
