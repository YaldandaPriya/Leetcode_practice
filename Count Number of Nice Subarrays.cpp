
//brute force O(n2) complexity

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
     

        int count = 0;
    for (int i = 0; i < nums.size(); i++) 
    {
        int odd = 0;
        for (int j = i; j < nums.size(); j++) 
        {
            if (nums[j] % 2)
                odd++;
            if (odd == k)
                count++;
        }
    }
    return count;
        
    }
};

// optimal O(n) complexity

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        map<int,int>prefix;
        prefix[0]=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                nums[i]=0;
            }
            else{
                nums[i]=1;
            }
        }
        int currsum=0, ans=0;
        for(int x=0; x<nums.size(); x++)
        {
            currsum+=nums[x];
            if(prefix.find(currsum-k)!=prefix.end()) ans+=prefix[currsum-k];
            prefix[currsum]++;
        }
        return ans;
        
    }
};