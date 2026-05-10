class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> a;

        int size = nums.size();
        for(int i = 0; i < size; i++)
            a.push_back({nums[i], i});

        sort(a.begin(), a.end());

        vector<int>indexes;

        int j = size - 1;
        for(int i = 0; i < size-1; ++i) {
            while(j > i && a[i].first + a[j].first > target) --j;

            if(a[i].first + a[j].first < target)
                break;
            else if (a[i].first + a[j].first == target) {
                indexes.push_back(min(a[i].second,a[j].second));
                indexes.push_back(max(a[i].second,a[j].second));
                return indexes;
            }
        }
    }
};
