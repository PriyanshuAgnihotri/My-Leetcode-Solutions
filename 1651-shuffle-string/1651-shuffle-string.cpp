class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
         int n = s.size() ; 
        string temp = s ; 
       for( int i = 0 ; i <n ; i++){
           s[indices[i]]= temp[i] ; 
       }
       return s ; 
    }
};