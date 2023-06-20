class Solution {
public:
    int minPairSum(vector<int>& nums) {
          sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        int ans=0;
        while(i<j)
        {
            int d=nums[i]+nums[j];
            ans=max(ans,d);
            i++;
            j--;
        }
        return ans;
    }
};