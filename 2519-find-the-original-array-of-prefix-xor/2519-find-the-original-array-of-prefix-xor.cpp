class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n=pref.size();
        int prev=0;
        for(int i=1; i<n; i++){
            prev^=pref[i-1];
            pref[i]=prev^pref[i];
        }
        return pref;
    }
};