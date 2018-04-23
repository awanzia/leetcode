# leetcode
class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        map<char, int> m;
        char c[] = {'I'
        , 'V', 'X', 'L', 'C', 'D', 'M'};
        int t[] = {1, 5, 10, 50, 100, 500, 1000};
        for(int i = 0; i < 7; i++) {
            m.insert(pair<char, int> (c[i], t[i]));
        }
        for(int i = 0; i < s.length() - 1; i++) {
            if(m[s[i]] >= m[s[i + 1]]) {
                ans = ans + m[s[i]];
            } else {
                ans = ans - m[s[i]];
            }
        }
        ans = ans + m[s[s.length() - 1]];
        return ans;
    }
};
最后的一位加的时间不同，不知道是不是leetcode里测试点的问题。
