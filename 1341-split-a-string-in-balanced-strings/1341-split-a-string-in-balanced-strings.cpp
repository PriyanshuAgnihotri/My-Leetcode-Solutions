class Solution {
public:
    int balancedStringSplit(string s) {
      int temp=0,count=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='L')
            temp++;
			else temp--;
			if(!temp)count++;
		}
		return count;  
    }
};