class Solution {
public:
    int minOperations(vector<string>& logs) {
        vector<string>st;
       for(auto it:logs){
           if(it=="../"){
               if(st.size()>0)
               st.pop_back();
           }
           else if(it!="./")
           {
               st.push_back(it);
           }
       } 
        return st.size();
    }
};
