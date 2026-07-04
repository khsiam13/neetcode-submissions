class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> count;
        for(auto num : nums) {
            count[num]++;
        }

        std::vector<std::vector<int>> freq(nums.size() + 1);

        for(auto& e : count) {
            freq[e.second].push_back(e.first);
        }

        std::vector<int> result;

        for(int i = nums.size(); i > 0; i--) {
            for(auto num : freq[i]) {
                result.push_back(num);
                if(result.size() == k) return result;
            }
        }
    }
};
