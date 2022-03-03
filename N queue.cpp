bool issafe(vector<vector<int>>a,int x,int y;int n)
{
    for(int row=0;row<x;row++)
    {
        if(a[row][y]==1)
        {
            return false;
        }
    }
    int row=x;
    int col=y;
    while(row>=0 && col>=0)
    {
        if(a[row][col]==1)
        {
            return false;
        }
        row--;
        col--;
    }
    row=x;
    col=y;
    while(row>=0 && col>=0)
    {
        if(a[row][col]==1)
        {
            return false;
        }
        row--;
        col++;
    }
    return true;
}
bool que(vector<vector<int>>&a,int x,int n)
{
    if(x>=n)
    {
        return true;
    }
    for(int i=0;i<n;i++)
    {
        if(issafe(a,x,i,n))
        {
            a[x][i]=1;
            if(que(a,x+1,n))
            {
                return true;
            }
            a[x][i]=0;
        }
    }
    return false;
}
