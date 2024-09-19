class Solution {
public:
    int compress(vector<char>& chars) {
         int n = chars.size();  // Get the size of the input array
        int index = 0;         // Index to modify the input array in-place
        int count = 1;         // Count consecutive occurrences of characters

        for (int i = 1; i <= n; i++) {
            // If current char is the same as the previous one, increase the count
            if (i < n && chars[i] == chars[i - 1]) {
                count++;
            } else {
                // Store the previous character in the original array
                chars[index++] = chars[i - 1];

                // If the count is greater than 1, append the count as separate characters
                if (count > 1) {
                    string s = to_string(count);
                    for (char ch : s) {
                        chars[index++] = ch;
                    }
                }

                // Reset the count to 1 for the next character
                count = 1;
            }
        }

        return index; 
    }
};