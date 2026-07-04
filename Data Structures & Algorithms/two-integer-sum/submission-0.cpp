class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> map;
        for(size_t i = 0; i < nums.size(); i++) {
            if(map.find(target - nums[i]) != map.end()) {
                return {map[target - nums[i]], static_cast<int>(i)};
            } 
            map[nums[i]] = i;
        }
        return {-1, -1};
    }
};
