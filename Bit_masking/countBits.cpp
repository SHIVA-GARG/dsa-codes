#include<iostream>
using namespace std;

// counting of all bits that are 1
int countbits(int n){
	int count =0;
	while(n){
		count+=n&1;
		n = n>>1;
	}
	return count;
}

// counting of all bits that are 1 Faster method
int countBitsFast(int n){ 
	int count = 0;
	while(n){
		count++;
		n = n&(n-1);
	}
	return count;
}


// Swapping of two numbers by XOR operator
void swapping(int &a,int &b){  			//a = 5,b=7
	a  = a^b;							//a = a^b = 5^7
	b = b^a;							//b = b^a = 7^5^7 = 5
	a = a^b;
}


// ith bits of some number
int getBits(int n,int i){
	int x = n&(1<<i);
	return x=0?0:1;
}

//change ith bits into one
int setbits(int &n,int i){
	int pos = 1<<i;
	n = n|pos;
	return n;
}

// clear ith bits of a number
int clearBit(int &n,int i){
	int pos = 1<<i;
	pos = ~pos;
	n = n&pos;
	return n;
}


int  main(){
	int n ,i;
	cin>>n>>i;
	cout<<clearBit(n,i);
//	swapping(a,b);
//	cout<<"a: "<<a<<"	b: "<<b;
//	cin>>n;
	//cout<<"bits are:"<<countBitsFast(n);
	return 0;
}
