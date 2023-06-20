class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
            int ans = 0, prev = 0;
       for(int i=0; i<bank.size(); i++)
       {
           int cnt=count(bank[i].begin(), bank[i].end(), '1');
           if(cnt==0) continue;
           ans+=cnt*prev;
           prev=cnt;
       }
       return ans;
    }
};