
class Solution {
public:

    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int res = 1; 
        int n = nums.size(), mini = nums[0];
        for(int i = 0; i < n; ++i)
        {
           if((nums[i] - mini) > k)
           {
               res++;
               mini = nums[i];
           }
        }

        return res;
    }
};
