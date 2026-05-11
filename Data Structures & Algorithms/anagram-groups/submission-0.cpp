class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash;
        for(const auto& str : strs) {
            string sorted = str;
            sort(sorted.begin(), sorted.end());
            hash[sorted].push_back(str);
        } 
        vector<vector<string>> answer;
        for(auto& i : hash) 
            answer.push_back(i.second);

        return answer;
    }
};
