static int t[101][101];
int max(int a,int b){
    return a>b?a:b;
}


int lcs1(int x, int y, string s1, string s2){
    if(x ==0 || y==0) return 0;
    if(t[x][y] !=-1) return t[x][y];
    if(s1[x-1] == s2[y-1])
        return t[x][y]= 1+lcs1(x-1,y-1,s1,s2);
    else{
        return t[x][y]=  max(lcs1(x,y-1,s1,s2),lcs1(x-1,y,s1,s2));
    }
}

int lcs(int x,int y,string s1,string s2){
    memset(t,-1,sizeof(t));
    return lcs1(x,y,s1,s2);
}
