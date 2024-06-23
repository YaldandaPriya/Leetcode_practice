class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int left,right=INT_MIN,top,bottom;
        for(int i=0;i<grid.size();i++){
            int flag=0;
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    flag=1;
                    top=i;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    right=max(right,j);
                }
            }
        }
     for(int i=0;i<grid[0].size();i++){
         int flag=0;
            for(int j=0;j<grid.size();j++){
                if(grid[j][i]==1){
                    flag=1;
                    left=i;
                    break;
                }
            }
          if(flag==1)
                break;
        }
        for(int i=grid.size()-1;i>=0;i--){
            int flag=0;
            for(int j=grid[0].size()-1;j>=0;j--){
                if(grid[i][j]==1){
                    flag=1;
                    bottom=i;
                    break;
                }
            }
          if(flag==1)
                break;
        }
        int ans=((bottom-top)+1)*((right-left)+1);
        return ans;
        
    }
};