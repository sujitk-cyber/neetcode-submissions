class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> HS(nums.begin(), nums.end());
        int longest = 0;
        for (int c : HS) {
            if (HS.count(c - 1) == 0) {
                int curr = c;
                int length = 1;
                while (HS.count(curr + 1)) {
                    curr++;
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};
