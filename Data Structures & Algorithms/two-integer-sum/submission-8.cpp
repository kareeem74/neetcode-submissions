class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Two pointers 
        vector<pair<int, int>> a;
        int size = nums.size();
        for(int i = 0; i < size; i++) a.push_back({nums[i], i});

        sort(a.begin(), a.end());


        int j = size - 1;
        for(int i = 0; i < size-1; ++i) {
            while(j > i && a[i].first + a[j].first > target) --j;

            if(a[i].first + a[j].first < target)
                break;
            else if (a[i].first + a[j].first == target) {
                return {min(a[i].second, a[j].second),max(a[i].second, a[j].second)};
            }
        }
    }
};
