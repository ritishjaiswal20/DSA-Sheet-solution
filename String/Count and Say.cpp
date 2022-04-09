class Solution {
public:
    string countAndSay(int n) {
     //return answer for base cases
        if(n==1)
            return "1";
        if(n==2)
            return "11";
        
		//initialize s with 11
        string s = "11";
        for(int i=3;i<=n;i++){
            string t="";
            int c = 1;
            for(int j=1;j<=s.length();j++){
			
			//check whether the current number is equal to previous or not
                if(s[j]!=s[j-1]){
                    t = t + to_string(c);
                    t = t + s[j-1];
                    c=1;
                }
                
				//if not equal keep on increasing by one
                else c++;
            }
            
			//at last update string s with the temp string t
            s = t;
        }
        
        return s;
    
    }
};
