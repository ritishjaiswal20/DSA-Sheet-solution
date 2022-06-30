bool isco(vector<int>a,int n,int c,int mid)
{   
    int cord=a[0];
    c--;
    for( int i=1;i<n;i++)
    {
        if((a[i]-cord)>=mid)
        {
            cord=a[i];
            c--;
        }
        if(c==0)
        {
            return true;
        }
    }
    return false;
}
int chessTournament(vector<int>a , int n ,  int c){
	// Write your code here
    sort(a.begin(),a.end());
    int low=1;
    int high=a[n-1]-a[0];
    int mid;
    int res=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(isco(a,n,c,mid))
        {
            res=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return res;
    
}
