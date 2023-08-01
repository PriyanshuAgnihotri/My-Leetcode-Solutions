class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        
        int sum1 = 0;
        int sum2 = 0;
        for(int i=0; i<nums.size() ;i++){
            sum1 +=nums[i];
            while(nums[i] > 0){
                int num = nums[i]%10;
                nums[i]/=10;
                sum2 +=num;
            }
        }
        return sum1-sum2;
        
    }
};