class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
         vector<string> s;
         int j=0;
         for(int i=0;i<n;i++){
            if(target[j]==i+1){
                j++;
                s.push_back("Push");
                if(j==target.size())
                    return s;
            }
            else{
                s.push_back("Push");
                s.push_back("Pop");
            }
              
         }
         return s;
    }
};