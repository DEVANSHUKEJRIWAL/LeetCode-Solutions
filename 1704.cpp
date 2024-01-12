class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char> vowel = {'a','i','e', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int m = s.length()/2;
        int vowelsCount=0;
        for(int i=0;i<m;i++){
            char charA = s[i];
            char charB = s[m+i];
            if(vowel.count(charA)) vowelsCount++;
            if(vowel.count(charB)) vowelsCount--;
        }
        return vowelsCount==0;

        
    }
};