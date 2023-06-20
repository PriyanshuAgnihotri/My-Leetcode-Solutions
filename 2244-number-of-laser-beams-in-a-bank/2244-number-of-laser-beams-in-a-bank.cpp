class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
          int cnt=0;
        int temp2=0;
        for(int i=0; i<bank.size(); i++){
            int temp=0;
            for(int j=0; j<bank[i].size(); j++){
                if(bank[i][j ]== '1'){
                    temp++;
                }
                    
            }
            if(temp==0){
                continue;
            }
            cnt+=temp*temp2;
            temp2=temp;
        }
        return cnt;
    }
};