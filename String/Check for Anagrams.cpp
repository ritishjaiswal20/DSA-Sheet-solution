class Solution {
public:
 
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        int a[26],b[26];
        for(int i=0;i<26;i++) {a[i]=0; b[i]=0;}
        for(char ch:s) {a[ch-'a']++;}
        for(char ch:t) {b[ch-'a']++;}
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]) return false;
        }
        return true;
    }

};
