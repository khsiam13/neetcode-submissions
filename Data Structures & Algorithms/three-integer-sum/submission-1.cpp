class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::vector<std::vector<int>> result;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size() - 2; i++) { // you need two values after i
            if(nums[i] > 0) {break;}
            if(i > 0 && nums[i] == nums[i-1]) {continue;} //handle duplicates

            int first = i+1, last = nums.size() - 1;
            int target = 0 - nums[i];
            while(first < last) {
                if(nums[first] + nums[last] == target) {
                    result.push_back({nums[i], nums[first++], nums[last--]});
                    while(first < last && nums[first] == nums[first-1]) first++;
                    while(first < last && nums[last] == nums[last+1]) last--;
                } else if(nums[first] + nums[last] > target) {
                    last--;
                } else {
                    first++;
                }
            }
        }

        return result;
    }
};
