class Solution {
   public:
    bool isPalindrome(string s) {

        s.erase(remove_if(s.begin(), s.end(), [](unsigned char c) { return !isalnum(c); }),
                s.end());

        for (char& c : s) {
            c = tolower(static_cast<unsigned char>(c));
        }
        int l = 0;
        int r = s.size() - 1;
        while (l < r) {
            if (s[l] != s[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
