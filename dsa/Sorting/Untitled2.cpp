#include<iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v;
	cout<<"vactor size:"<<v.size();
	int a[]= {4,1,10,4,6,3};
	int size = 6;
	cout<<"\nvactor size:"<<v.size();
	for(int i=0;i<size;i++){
		v.push_back(a[i]);
	}
	cout<<"\nvactor size:"<<v.size();
	return 0;
}
