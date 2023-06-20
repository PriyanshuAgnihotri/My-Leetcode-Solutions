class Solution {
public:
    int minOperations(int n) {
        int ans = 0;
        if (n%2 == 0) {
            n = n/2;
            ans = (n * (2 + (n-1) * 2))/ 2;
        }
        else {
            n = n/2 ;
            ans = (n * (2 * 2 + (n-1) * 2)) / 2;;
        }
        return ans; 
    }
};