class Solution {
public:
    int longestPalindrome(string s) {
        int freq[128] = {}, length = 0;
        for (char c : s) freq[c]++;
        for (int f : freq) length += f / 2 * 2;
        return length + (length < s.size());
    }
};
