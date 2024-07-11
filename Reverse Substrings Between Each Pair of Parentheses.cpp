class Solution {
int i = 0;
public:
    string reverseParentheses(string s) {
        return help(s);
    }

    string help(string& s) {
        string result;

        while (i < s.length()) {
            if (s[i] == ')') {
                i++;
                reverse(result.begin(), result.end());
                return result;
            } else if (s[i] == '(') {
                i++;
                string st = help(s);
                result += st;
            } else {
                result += s[i];
                i++;
            }
        }
        return result;
    }
};