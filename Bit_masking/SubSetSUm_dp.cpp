#include<iostream>
using namespace std;

bool subsetsum(int arr[],int size,int n){
	bool t[size+1][n+1];
	for(int j=0;j<=n;j++)
		t[0][j] = false;
	for(int i=0;i<=size;i++)
		t[i][0] = true;
	for(int i=1;i<=size;i++){
		for(int j=1;j<=n;j++){
			if(arr[i-1] > j)
				t[i][j] = t[i-1][j];
			else
				t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
			
		}
	}
	
//	for (int i = 0; i <= size; i++)
//	{
//	for (int j = 0; j <= n; j++)
//		printf ("%4d", t[i][j]);
//	printf("\n");
//	}
	return t[size][n];
}

int countsum(int arr[],int size,int n){
	int t[size+1][n+1];
	for(int j=0;j<=n;j++)
		t[0][j] = 0;
	for(int i=0;i<=size;i++)
		t[i][0] = 1;
	for(int i=1;i<=size;i++){
		for(int j=1;j<=n;j++){
			if(arr[i-1] > j)
				t[i][j] = t[i-1][j];
			else
				t[i][j] = t[i-1][j-arr[i-1]] +	 t[i-1][j];
			
		}
	}
	
	for (int i = 0; i <= size; i++)
	{
	for (int j = 0; j <= n; j++)
		printf ("%4d", t[i][j]);
	printf("\n");
	}
	return t[size][n];
}

bool equalsum(int arr[],int size){
	int sum=0;
	for(int i=0;i<size;i++)
		sum+=arr[i];
	if(sum%2 != 0)
		return false;
	return subsetsum(arr,size,sum/2);
}




int main(){
	int n;
	n =11;
	int arr[] = {1,5,11,5};
		int size = sizeof(arr)/sizeof(arr[0]);
	cout<<"no. of ways:"<<countsum(arr,size,n);
//	cout<<size<<endl;
////	int size = 4;
//	if(equalsum(arr,size) == true)
//		cout<<n<<" is possible";
//	else
//		cout<<n<<" not possible";
	return 0;
	
}
