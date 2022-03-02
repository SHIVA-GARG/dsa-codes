#include<bits/stdc++.h>
using namespace std;

vector<string> res;
	void allPerm(string s,int l,int r)
	{
	    if(l == r){
	        cout<<s<<endl;
	    }
	    else    // permutation made
	    {
	        for(int i=1;i<=r;i++)
	        {
	            
	            swap(s[l],s[i]);    //swapping done
	            
	            allPerm(s,l+1,r);       // recursive call
	            
	            swap(s[l],s[i]);        // backTrack
	        }
	    }
	}
		vector<string>find_permutation(string S)
		{
		  //  vector<string> res;
		    allPerm(S,0,S.size()-1);
		    
		    return res;
		    
		}

int main(){
	string S = "ABC";
	find_permutation(S);
	return 0;
	
}
