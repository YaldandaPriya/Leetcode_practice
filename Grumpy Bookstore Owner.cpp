class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int maxi=0;
        int sum=0;
        for(int i=0;i<grumpy.size();i++){
            if(grumpy[i]==0){
                sum+=customers[i];
            }
        }
        
        int winsum=0;
        int i=0,j=0;
        while(j<grumpy.size()){
            if(grumpy[j]==1){
                winsum+=customers[j];
            }
            if(j-i>=minutes){
                if(grumpy[i]==1)
                winsum-=customers[i];
                i++;
            }
            maxi=max(maxi,winsum);
            j++;
        }
        sum+=maxi;
        return sum;
        
    }
};

