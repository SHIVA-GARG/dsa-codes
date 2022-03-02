    #include <bits/stdc++.h>
    using namespace std;
    
    int main() {
    	int t;
    	cin>>t;
    	while(t--){
    	    int q;  
    	    cin>>q;
    	    stack<int> st;
    	    
    	    while(q--)
    	    {
    	        string s;
    	        getline(cin, s);
    	        
    	        while (s.length()==0 )
            	    getline(cin, s);
    	        
    	       // cout<<s<<" ";
    	        
    	        if(s[0] == 'p'){
    	             char t = s[s.length()-1];
    	             int pos = s.find(" ");
    	             string temp = s.substr(pos+1);
    	             cout<<temp<<" ";
    	           // cout<<'$'<<t<<" ";
    	           // int temp = atoi(t);
    	           // st.push(temp);
    	        }
    	       // else
    	       // {
    	       //    // cout<<'*'<<s[0]<<" ";
    	       //     if(st.empty()){
    	       //         cout<<-1<<" ";
    	       //     }else{
    	       //         cout<<st.top()<<" ";
    	       //         st.pop();
    	       //     }
    	       // }
    	    }
    	    cout<<endl;
    	}
    	return 0;
    }
