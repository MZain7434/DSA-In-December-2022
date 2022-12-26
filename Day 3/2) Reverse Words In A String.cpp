class Solution {
public:
    string reverseWords(string s) {
        string ans;

        for(int i=0; i<s.size(); i++) {
            if (s[i] == ' ') {
                int j = i;
                while(s[j+1] == ' ' && j+1<s.size()) {
                    j++;
                }
                ans += " ";
                i = j;
            } else {
                int j = i;
                string tmp;
                tmp += s[i];
                while(s[j+1] != ' ' && j+1<s.size()) {
                    tmp += s[j+1];
                    j++;
                }
                i = j;
                reverse(tmp.begin(), tmp.end());
                ans += tmp;
            } 
        }
        int idx_start = 0, idx_end = ans.size() - 1;
        while(idx_start < ans.size() && ans[idx_start] == ' ') {
            idx_start++;
        }
        while(idx_end >= 0 && ans[idx_end] == ' ') {
            idx_end--;
        }
        ans = ans.substr(idx_start, idx_end - idx_start + 1);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};