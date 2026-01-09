class Solution {
public:
    int romanTod(char c){
        if(c=='I')
            return 1;
        if(c=='V')
            return 5;
        if(c=='X')
            return 10;
        if(c=='L')
            return 50;
        if(c=='C')
            return 100;
        if(c=='D')
            return 500;
        else
            return 1000;
    }
    int romanToInt(string s) {
        int i=0;
        int num=0;
        while(i<s.length()){
            if(i != s.length()-1 && romanTod(s[i])<romanTod(s[i+1])){
                int temp=romanTod(s[i+1])-romanTod(s[i]);
                num+=temp;
                i+=2;
                
            }
            else{
                num+=romanTod(s[i]);
                i++;
            }
        }
        return num;
    }
};