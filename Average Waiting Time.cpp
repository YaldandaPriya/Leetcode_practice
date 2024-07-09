class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int present=0;
        double sum=0;
        for(int i=0;i<customers.size();i++){
            int arrival=customers[i][0];
            int time=customers[i][1];
            int start=max(present,arrival);
            present=start+time;
            sum+=(double)(present-arrival);
        }
        return sum/customers.size();
    }
};