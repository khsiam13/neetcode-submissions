class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> map;
        std::vector<std::vector<std::string>> output;
        for(auto& str : strs) {
            int arr[26] = {0};
            for(char c : str) {
                arr[c - 'a']++;
            }
            std::string key;
            for(auto num : arr) {
                key += to_string(num) + "-";
            }
            map[key].push_back(str);
        }
        std::vector<std::vector<std::string>> result;
        for(auto e : map) {
            result.push_back(e.second);
        }
        return result;
    }
};
