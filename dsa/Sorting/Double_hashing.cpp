#include<iostream>
using namespace std;

class hashtable{
	private:
		int size;
		int h[10];
	public:
		hashtable(){
			h[10] = {-1};
			for(int i=0;i<10;i++)
				h[i] = -1;
		}	
		void insert(int key);
		void search(int key);
		void delete1(int key);			
};

void hashtable::insert(int key){
	int hash = key%10;
	int hash2 = 7-(key%7);				// 7 is second last prime number between 0 and 9
	int i=0;
	int hd = (hash+i*hash2)%10;
	while(h[hd] != -1)
		hd =  (hash+(++i)*hash2)%10;
	h[hd] = key;
	for(int i=0;i<10;i++)
		cout<<h[i]<<",";
	cout<<endl;
}

void hashtable::search(int key){
	int hash = key%10;
	int i=0;
	int hd = hash+i;
	if(h[hd] == key){
		cout<<"key found.";
		return;
	}
	else{
		hd++;
		while(h[hd] != -1 && hd != hash){
		if(h[hd] == key){
			cout<<"key is found.";
			return;
		}
		hd = (hash+(++i))%10;
	}
	}
	cout<<"key is not found."; 
}

int main(){
	hashtable h1;
	h1.insert(35);
	h1.insert(45);
	h1.insert(55);
	h1.insert(65);
	h1.insert(25);
	h1.search(53);
	return 0;
}
