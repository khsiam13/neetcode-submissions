class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> count;
        for(auto e : nums) {
            if(++count[e] > 1) {return true;}
        }
        return false;
    }
};