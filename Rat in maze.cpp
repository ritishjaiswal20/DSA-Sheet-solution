
class Solution{
    public:
    bool issafe(vector<vector<int>>a,int x,int y,int n)
    {
        if(x<n && y<n &&a[x][y]==1)
        {
            return true;
        }
        return false;
        
    }
    bool rat(vector<vector<int> >a,int x,int y,int n,vector<vector<int>>&res)
    {   
        if(issafe(a,x,y,n))
        {
            res[x][y]=1;
            if(rat(a,x+1,y,n,res))
            {
                return true;
            }
            if(rat(a,x,y+1,n,res))
            {
                return true;
            }
            res[x][y]=0;
            return false;
        }
        return false;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<vector<int>>res;
        rat(m,0,0,n,res);
        return res;
        
    }
};

    
