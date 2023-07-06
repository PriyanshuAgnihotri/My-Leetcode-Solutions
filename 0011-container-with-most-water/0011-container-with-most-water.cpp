class Solution {
public:
    int maxArea(vector<int>& height) {
     int ans = 0;
        int low = 0;
        int high = height.size()-1;

        while (low < high)
        {
            int distance = high - low;
            int area = distance * min(height[low], height[high]);
            ans = max(ans, area);

            if (height[low] < height[high])
            {
                low++;
            }
            else
                high--;
        }
        return ans;
    }
};