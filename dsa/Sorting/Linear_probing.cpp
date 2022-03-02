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
	int i=0;
	while(h[(hash+i)%10] != -1)
		i++;
	h[(hash+i)%10] = key;
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
	h1.insert(26);
	h1.insert(30);
	h1.insert(45);
	h1.insert(23);
	h1.insert(25);
	h1.insert(43);
	h1.insert(74);
	h1.insert(19);
	h1.insert(60);
	h1.insert(53);
	h1.search(53);
	return 0;
}
