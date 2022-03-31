class Solution {
public:
    int romanToInt(string s) {
         map<char,int> m;
         m['I']=1;
         m['V']=5;
         m['X']=10;
         m['L']=50;
         m['C']=100;
         m['D']=500;
         m['M']=1000;
         int i=0;
         int ans=0;
        if(s.length()==1)
	    return m[s[0]];
        
        while(i<=s.size()-2)
        {
            if(m[s[i]]>=m[s[i+1]])
            {
              ans+=m[s[i]];
                i++;
            }
            else
            {
                ans+=m[s[i+1]]-m[s[i]];
                i+=2;
            }
            
        }
        if(i==s.length()-1)
        {
            ans+=m[s[i]];
        }
        return ans;
        
    }
};
