class Solution {
public:
    string orderlyQueue(string s, int k) {
        string ans;
        ans=s;
        if(k>1){
            sort(s.begin(),s.end());
            return s;
        }
        else{
            string p="";
            p = s+s;
            for(int i=0;i +s.length()<=p.length();i++){
                ans = min(ans, p.substr(i , s.length()));
            }
            return ans;
        }
    }
};