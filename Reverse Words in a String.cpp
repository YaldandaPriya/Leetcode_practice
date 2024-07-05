class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string a="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                a+=s[i];
            }
            else if(s[i]==' '&&a!=""){
                st.push(a);
                a="";
                
            }
            
        }
        if (a!=""){
            st.push(a);
        }
        string ans="";
        while(st.size()>0){
            ans+=st.top();
            st.pop();
            if (!st.empty())
                ans+=' ';
            
        }
        return ans;
    }
};