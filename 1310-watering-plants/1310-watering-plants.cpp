class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
     int ans=0 ;
     int temp= capacity;
     for(int i=0;i<plants.size();i++){
         if (temp <plants[i]){
             
             temp = capacity;
             ans +=(i*2);

         }
         ans++;
         temp -= plants[i];

     }
     return ans;
    }
};