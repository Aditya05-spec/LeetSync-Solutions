class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        int n = s.size(), m = t.size();
        if (n > m)
            return false;
        vector<int> pref(n, m), suff(n, -1);
        int j = 0;
        for (int i = 0; i < n; i++) {
            while (j < m && t[j] != s[i])
                j++;
            if (j < m) {
                pref[i] = j;
                j++;
            } else