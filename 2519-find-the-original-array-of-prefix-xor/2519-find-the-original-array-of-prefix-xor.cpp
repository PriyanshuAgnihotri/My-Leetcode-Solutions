class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
       int sum=0;
        for(int i=0; i<pref.size();i++){
            pref[i]^=sum;
            sum ^= pref[i];
        }
        return pref; 
    }
};