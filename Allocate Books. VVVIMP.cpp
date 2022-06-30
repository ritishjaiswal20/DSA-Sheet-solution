bool ispos(vector<int>a ,int n,int m,int mid)
{
    int pages=0;
    int count=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>mid)
        {
            return false;
        }
        if(pages+a[i]<=mid)
        {
            pages+=a[i];
        }
        else
        {
            count++;
            pages=a[i];
        }
    }
    if(count<=m)
    {
        return true;
    }
    return false;
}


int Solution::books(vector<int> &a, int m) {
     int low=a[0];
    int sum=0;
    int n=a.size();
    if(m>n)
    {
        return -1;
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
   int high=sum;
    int mid;
    long res=-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(ispos(a,n,m,mid))
        {   
            res=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return res;
}

