class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
     int rows=grid.size();
     int cols=grid[0].size();
     for(int i=0;i<rows;i++){
         if(grid[i][0]==0) {
            for(int k=0;k<cols;k++){  
                if(grid[i][k]==0) grid[i][k]=1;
                else grid[i][k]=0; 
            }    
         }
     }

     for(int j=0;j<cols;j++) {
         int count0=0;
         int count1=0;
         for(int i=0;i<rows;i++)
            {
                if(grid[i][j]==0) count0++;
                else count1++;   
            }
         if(count0>count1){ 
             for(int k=0;k<rows;k++)
                {
                    if(grid[k][j]==0) grid[k][j]=1;
                    else grid[k][j]=0;   
                }              
        }  
        
     }

     int sum=0;
        for(int i=0;i<rows;i++){
            int x=1;
            for(int j=cols-1;j>=0;j--){
               sum+=grid[i][j]*x;
               x*=2;
            }
        }
    return sum;
    }
};