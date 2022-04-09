class Solution {
public:
    int compareVersion(string v1, string v2) {
        int n1=v1.length();
        int n2=v2.length();
        int i=0;
        int j=0;
        int number1=0;
        int number2=0;
        while(i<n1 || j<n2)
        {
            while(i<n1 && v1[i]!='.')
            {
                number1=number1*10 +(v1[i]-'0');
                i++;
            }
            while(j<n2 && v2[j]!='.')
            {
                number2=number2*10 +(v2[j]-'0');
                j++;
            }
            if(number1 >number2)
            {
                return 1;
            }
            if(number1 <number2)
            {
                return -1;
            }
            number1=0;
            number2=0;
            i++;
            j++;
        }
        return 0;
    }
};
