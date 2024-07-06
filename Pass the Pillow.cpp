class Solution {
public:
    int passThePillow(int n, int time) {
        if(time<n){
            return time+1;
        }
        int i=1;
        bool dir=true;
        while(time--){
            if(i==n){
                dir=false;
            }
            if(i==1){
                dir=true;
            }
            if(dir==true){
                i++;
            }
            else{
                i--;
            }
            
        }
        return i;
    }
};