class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;

        for(auto num : s) {
            if(s.find(num -1) == s.end()) {
                int current = num;
                int l = 1;

                while(s.find(current+1) != s.end()) {
                    current++; l++;
                }

                longest = max(longest, l);
            }
        }
        return longest;
    }
};
