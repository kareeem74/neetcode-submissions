class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> anagramCheck;
        for (char i : s)
            anagramCheck[i]++;
        
        for (char i : t)
            if(anagramCheck[i])
                anagramCheck[i]--;
            else 
                return false;
                
        for (auto& i : anagramCheck) {
            if (i.second != 0)
                return false;
        }

        
        return true;
    }
};