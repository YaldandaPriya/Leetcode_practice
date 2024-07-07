class Solution {
public:
    string getEncryptedString(string s, int k) {
        string res="";
        for(int i=0;i<s.size();i++){
            res=res+s[(i+k)%s.size()];
        }
        return res;
    }
};