class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string temp="";
        string ans="";
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == ' ') {
                if (!temp.empty()) {
                    reverse(temp.begin(), temp.end());
                    ans += temp + ' ';
                    temp = "";
                }
            } else {
                temp.push_back(s[i]);
            }
        }
        if (!temp.empty()) {
            reverse(temp.begin(), temp.end());
            ans += temp;
        }
        if (!ans.empty() && ans.back() == ' ')
            ans.pop_back();
        return ans;
    }
};