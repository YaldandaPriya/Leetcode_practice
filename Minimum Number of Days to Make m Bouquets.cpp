class Solution {
public:
   bool possible(vector<int>& bloomDay, int m, int k,int day){
        int cnt=0;
        int noB=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                cnt++;
            }
            else{
                noB+=(cnt/k);
                cnt=0;
            }
        }
        noB+=(cnt/k);
       if(noB>=m){
           return true;
       }return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val = m * 1ll * k * 1ll;
        if(val>bloomDay.size())
            return -1;
        int ans=-1;
       int mini = INT_MAX, maxi = INT_MIN;
    for (int i = 0; i < bloomDay.size(); i++) {
        mini = min(mini, bloomDay[i]);
        maxi = max(maxi, bloomDay[i]);
    }
        int low = mini, high = maxi;
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(bloomDay,m,k,mid)){
               
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};