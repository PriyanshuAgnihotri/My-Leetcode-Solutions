class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
      int m=grid.size();
      int n= grid[0].size();
      int sum=0 , max=-1;
      for(int i=0; i<m; i++){
          sort(grid[i].begin(), grid[i].end());
        
      } 
      for(int i=0; i<n;i++){
          max=0;
          for(int j=0; j<m; j++){
              if(max < grid[j][i]){
                  max = grid[j][i];
              }
          }
          sum += max;
      }
      return sum;

    }
};