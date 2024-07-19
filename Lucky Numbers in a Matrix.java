class Solution {
    public List<Integer> luckyNumbers (int[][] matrix) {
        List<Integer>mini=new ArrayList<Integer>();
        for(int i=0;i<matrix.length;i++){
            int minval=Integer.MAX_VALUE;
            for(int j=0;j<matrix[0].length;j++){
                minval=Math.min(minval,matrix[i][j]);
            }
            mini.add(minval);
        }
        List<Integer>maxi=new ArrayList<Integer>();
        for(int i=0;i<matrix[0].length;i++){
            int maxval=Integer.MIN_VALUE;
            for(int j=0;j<matrix.length;j++){
                maxval=Math.max(maxval,matrix[j][i]);
            }
            maxi.add(maxval);
        }
        List<Integer>ans=new ArrayList<Integer>();
        for(int i:mini){
            
                if(maxi.contains(i)){
                    ans.add(i);
                }
            
        }
        return ans;
    }
}