class Solution {
public:
    int maximumScore(int a, int b, int c) {
         int total = a+b+c;
        int big = max(max(a,b),c);
        int low = min(min(a,b),c);
        int mid = total-big-low;
        if(big >= mid+low)
            return mid+low;
        return total/2;
    }
};