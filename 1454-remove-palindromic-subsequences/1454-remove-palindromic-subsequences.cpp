class Solution {
public:
    int removePalindromeSub(string s) {
        
        int ans=0;
        bool a=true;
        int n=s.length();
        for(int i=0; i<s.length()/2; i++){
        if(s[i] != s[n-i -1]){
           a=false;
           break;
        }     
        }
        if(a)
        {
        ans++;
        }
        else 
        {
            ans+=2;
        }
        return ans;
    }
};