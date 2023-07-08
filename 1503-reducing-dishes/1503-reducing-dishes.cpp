class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();
        sort(satisfaction.begin(), satisfaction.end());
              int ans=0,sum=0;
        for(int dish=n-1; dish>=0; --dish){
            if(satisfaction[dish] + sum<0){
                break;
            }
            else{
                sum +=satisfaction[dish];
                ans+= sum;
            }
        }
        return ans;
    }
};