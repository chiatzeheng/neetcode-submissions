class Solution {
public:
    bool isPalindrome(string s) {
        // keep only alphanumerics, then lowercase
        erase_if(s, [](unsigned char c) { return !isalnum(c); });
        for (char& c : s) c = tolower((unsigned char)c);

        int n = s.size();

        int i = (n - 1) / 2;   // left of center
        int j = n / 2;         // right of center (same as i when n is odd)

        while (i >= 0) {
            if (s[i] != s[j]) return false;
            --i;
            ++j;
        }
        return true;
    }
};