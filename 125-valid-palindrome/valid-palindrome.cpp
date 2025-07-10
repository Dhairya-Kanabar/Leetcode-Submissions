class Solution {
public:
    bool isPalindrome(string s) {
        return temp(s, 0, s.length() - 1);
    }

private:
    bool temp(const string& s, int l, int r) {
        if (l >= r) return true;

        if (!isalnum(s[l])) return temp(s, l + 1, r);
        if (!isalnum(s[r])) return temp(s, l, r - 1);

        if (tolower(s[l]) != tolower(s[r])) return false;

        return temp(s, l + 1, r - 1);
    }
};
