class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;
            
        unordered_map<char, int> anagramCheck;
        for (char i : s)
            anagramCheck[i]++;
        
        for (char i : t)
            if(anagramCheck[i])
                anagramCheck[i]--;
            else 
                return false;
        
        return true;
    }
};