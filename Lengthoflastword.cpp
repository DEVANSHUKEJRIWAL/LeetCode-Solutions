class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size(), ans = 0 , i = n-1; 
        while(s[i] == ' ')              i--;
        for(;i>=0 && s[i] != ' ';i--)   ans++;
        return ans;
        
    }
};