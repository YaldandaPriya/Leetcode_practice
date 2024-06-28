class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int>count(n);
        for(auto vec:roads)
            count[vec[0]]++, count[vec[1]]++;
        sort(begin(count), end(count));
        
        long long res = 0;
        for(int i=0;i<n;i++)
            res += 1LL*(i+1)*count[i];
        return res;
    }
};