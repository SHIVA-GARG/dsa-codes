int subsetsum(int arr[],int n){
	    int sum = 0;
	    for(int i=0;i<n;i++)
	        sum+=arr[i];
	   int t[n+1][sum+1];
	   for(int i=0;i<=sum;i++)
	    t[0][i] = 0;
	   for(int i=0;i<=n;i++)
	    t[i][0] = 1;
	   for(int i=1;i<=n;i++){
	       for(int j=1;j<=sum;j++){
	           if(arr[i-1]>j)
	            t[i][j] = t[i-1][j];
	           else
	            t[i][j] = t[i-1][j] || t[i-1][j-arr[i-1]];
	       }
	   }
	   int k=0;
	   int p = 0;
	   while(k<=sum/2){
	       if(t[n][k])
	        p = k;
	       k++;
	   }
	   return sum-2*p;
	  
	}
	int minDiffernce(int arr[], int n) 
	{ 
	   
	   return subsetsum(arr,n);
	    
	}  
