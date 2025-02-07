class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& q) {
        unordered_map<int,int>m;
        unordered_map<int,int>color;
        vector<int>ans;
        for(int i=0;i<q.size();i++){
            if(m.find(q[i][0]) !=m.end()){
                color[m[q[i][0]]]--;
                if(color[m[q[i][0]]]==0){
                    color.erase(m[q[i][0]]);
                }
                m[q[i][0]]=q[i][1];
                color[q[i][1]]++;
                
            }
            else{
                m[q[i][0]]=q[i][1];
                color[q[i][1]]++;
            }
            ans.push_back(color.size());
        }
        return ans;
    }
};