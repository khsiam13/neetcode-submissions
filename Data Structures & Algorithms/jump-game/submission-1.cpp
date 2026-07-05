class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jumped = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(i > jumped) return false;
            jumped = max(jumped, i + nums[i]);
        }
        return true;
    }
};
