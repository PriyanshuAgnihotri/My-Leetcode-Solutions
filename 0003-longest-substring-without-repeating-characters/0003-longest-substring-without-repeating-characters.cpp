class Solution {
public:
    bool sr(vector<char>& sw, char c) {
        for(int i = 0; i < sw.size(); i++) {
            if(c == sw[i]) return true;
        }
        return false;
    }

    int lengthOfLongestSubstring(string s) {
        int maxx = 0;
        vector<char> sw;
        for(int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if(sr(sw, ch)==true) {    
                while(sw.front() != ch) {
                    sw.erase(sw.begin());
                }
                sw.erase(sw.begin());
            }
            sw.push_back(ch);
            maxx = max(maxx, (int)sw.size());
        }
        return maxx;  
    }
};