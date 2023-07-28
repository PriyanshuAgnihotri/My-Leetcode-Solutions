class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int row =matrix.size();
        int column = matrix[0].size();
        int left = matrix[0][0], right = matrix[row - 1 ][column -1];
        while(left <= right){
            int mid = left + (right - left)/2;
            int count =0;
            for(int i=0; i< column; i++){
                count += upper_bound(matrix[i].begin(), matrix[i].end(),mid) - matrix[i].begin() ;
            }
            if(count < k)
            left =mid+1;
            else right =mid-1;



        }
        return left;
    }
};