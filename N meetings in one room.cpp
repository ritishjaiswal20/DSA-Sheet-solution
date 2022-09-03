
class Solution
{
    class met{
    public:
    int start;
    int end;
    int pos;
};
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    bool static comp(met m1,met m2)
    {
    // if (m1.end < m2.end) return true;
        //  else if (m1.end > m2.end) return false;
        //  else if (m1.pos < m2.pos) return true;
        //  return false;
         return m1.end<m2.end;
        //if true the pair does not need to swap
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        met m[n];
        for(int i=0;i<n;i++)
        {
            m[i].start=start[i];
            m[i].end=end[i];
            m[i].pos=i;
        }
        sort(m,m+n,comp);
        int res=1;
        int endlimit=m[0].end;
        for(int i=1;i<n;i++)
        {
            if(m[i].start>endlimit)
            {
                res++;
                endlimit=m[i].end;
            }
        }
        return res;
        
    }
};
