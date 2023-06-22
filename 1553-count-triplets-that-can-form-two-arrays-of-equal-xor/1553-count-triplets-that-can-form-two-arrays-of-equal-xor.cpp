class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int ans=0;
       
        int n= arr.size();
        for(int i=0; i<n-1;i++){
             int temp=0;
            for(int j=i; j< n ;j++){
                temp ^= arr[j];
                if (temp==0)
                ans += (j-i);
            }


        }
        return ans;
    }
};