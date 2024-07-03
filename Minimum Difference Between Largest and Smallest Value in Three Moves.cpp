class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        if (n <= 3) {
            return 0;
        }
        sort(nums.begin(), nums.end());
        int min_diff = INT_MAX;
        for (int i = 0; i <= 3; ++i) {
            min_diff = min(min_diff, nums[n-1-i] - nums[3-i]);
        }
        
        return min_diff;
    }
};