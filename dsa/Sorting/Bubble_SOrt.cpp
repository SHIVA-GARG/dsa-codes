#include<iostream>
using namespace std;
class bsort{
	private:
		int size;
		int a[];
	public:
		bsort(int);
		void bubbleSort();
		void display();
};

bsort::bsort(int size){
	this->size = size;
	//a = new int[size];
	int a[size] = {3,1,6,4,0}; 
}
void swap(int* a,int* b){
	int *c = b;
	a = b;
	b = c;
}

void bsort::bubbleSort(){
	for(int i=0;i<size;i++){
		for(int j=0;j<size-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}

void bsort::display(){
	for(int i=0;i<size;i++)
		cout<<a[i]<<",";
}


int main(){
	//bsort b1(5);
	//b1.display();
	//b1.bubbleSort();
//	b1.display();
	int a[] = {4,1,3,9,0,6,2,4,1,9,0,2,6};
	int size =13;
	for(int i=0;i<size;i++){
		for(int j=0;j<size-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
	for(int i=0;i<size;i++)
		cout<<a[i]<<",";
	return 0;
}
