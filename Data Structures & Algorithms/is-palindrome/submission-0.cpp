class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for (unsigned char c : s) {
            if (isalnum(c)) {
                str += tolower(c);
            }
        }

        for (int i = 0, v = (int)str.length() - 1; i < v; i++, v--) {
            if (str[i] != str[v]) {
                return false;
            }
        }

        return true;
    }
};
