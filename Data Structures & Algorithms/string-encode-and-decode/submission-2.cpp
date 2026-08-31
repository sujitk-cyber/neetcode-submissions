class Solution {
   public:
    string encode(vector<string>& strs) {
        string result = "";
        for (const auto& str : strs) {
            for (const auto& character : str) {
                result.push_back(character);
            }
            result.push_back((char)0xFFFFFF);
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        string current = "";
        for (const auto& character : s) {
            if (character == (char)0xFFFFFF) {
                result.push_back(current);
                current = "";
            } else {
                current.push_back(character);
            }
        }
        return result;
    }
};
