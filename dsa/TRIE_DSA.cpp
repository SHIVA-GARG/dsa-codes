#include<bits/stdc++.h>
using namespace std;

class TrieNode{
	public:
		TrieNode* children[26];
		bool isEnd;
		
//		TrieNode(){
//			children  = new TrieNode[26];
//			isEnd = false;
//		}
};

class Trie{
	
	TrieNode root;
	
	public:
		// constrctor of Trie Class
		
		Trie(){
			root = new TrieNode();
		}
		
		void insert(string word){
			int n = word.length();
			
			TrieNode node = root;
			
			for(int i=0;i<n;i++){
				char c = word[i];
				
				if(node.children[c-'a'] == NULL){
					node.children[c-'a'] = new TrieNode();
				}
				node  = node.children[c-'a'];
			}
			node.isEnd = true;
		}
		
		bool search(string word){
			TrieNode node = root;
			
			for(int i=0;i<word.length();i++){
				char c = word[i);
				
				if(node.children[c-'a'] == NULL){
					return false;
				}
				node = node.children[c-'a'];
			}
			return node.isEnd;
		}
};

int main(){
	int T;
	cin>>T;
	Trie t;
	while(T--){
		string s;
		cin>>s;
		t.insert(s);
		
	}
	cout<<"enter how word searching u have:";
	cin>>T;
	while(T--){
		string s;
		cin>>s;
		if(t.search(s)){
			cout<<"word found"<<endl;
		}else
			cout<<s<<" not found"<<endl;
	}
	cout<<"thanks for using our dictionary";
	return 0;
}
