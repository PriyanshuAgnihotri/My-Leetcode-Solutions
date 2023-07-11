class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        int v1 = 0; for(auto i:arr1) v1^=i;
        int v2 = 0; for(auto i:arr2) v2^=i;
        return (v1&v2);
    }
};