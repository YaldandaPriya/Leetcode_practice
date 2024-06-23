class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n/2;i++){
            int maxi=nums[n-i-1];
            int mini=nums[i];
            double val=((double)maxi+mini)/2;
            ans.push_back(val);
           
        }
        return *min_element(ans.begin(),ans.end());    
        }
};