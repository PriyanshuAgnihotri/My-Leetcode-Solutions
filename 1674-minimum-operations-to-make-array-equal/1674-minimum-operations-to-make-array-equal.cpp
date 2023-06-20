class Solution {
public:
    int minOperations(int n) {
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            nums[i] = (2 * i) + 1;
        }
        int ans=0;
        for(int i=0;i<n/2;i++){
            int diff=nums[n-i-1]-nums[i];
            ans+=diff/2;
        }
        return ans;   
    }
};