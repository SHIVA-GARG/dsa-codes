#include <bits/stdc++.h>
using namespace std;

void count(string s1[],string s2[],int n,int m){
	map<string,int> freq;
	for(int i=0;i<n;i++){
		sort(s1[i].begin(),s1[i].end());
		freq[s1[i]]++;
	}
	
	for(int i=0;i<m;i++){
		sort(s2[i].begin(),s2[i].end());
		cout<< freq[s2[i]]<<" ";
	}
}

int main() {
	string arr1[] = { "geeks", "learn",
                      "for", "egeks",
                      "ealrn" };
    int n = sizeof(arr1)
            / sizeof(string);
 
    string arr2[] = { "kgees", "rof",
                      "nrael" };
    int m = sizeof(arr2)
            / sizeof(string);
 
    count(arr1, arr2, n, m);
    return 0;
    
}
