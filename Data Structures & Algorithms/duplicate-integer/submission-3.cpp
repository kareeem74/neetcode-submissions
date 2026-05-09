class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> freq;
        for(int i : nums)
        {
            if(freq.find(i) != freq.end())
                return true;
            freq.insert(i);
        }
        return false;
        
    }
};