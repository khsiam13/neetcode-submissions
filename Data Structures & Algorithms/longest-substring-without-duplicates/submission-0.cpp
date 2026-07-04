class Solution {
public:
     int lengthOfLongestSubstring(std::string s) {
            int length = 0;
                std::unordered_map<char, int> map;
                    int l = 0, r = 0;
                        
                            while (r < s.size()) {
                                    map[s[r]]++; // Expand the window by including the character at 'r'
                                            
                                                    // If a duplicate is found, shrink the window from the left
                                                            while (map[s[r]] > 1) {
                                                                        map[s[l]]--;
                                                                                    l++;
                                                                                            }
                                                                                                    
                                                                                                            // FIX: Added + 1 because the window [l, r] is inclusive
                                                                                                                    length = std::max(length, r - l + 1); 
                                                                                                                            r++;
                                                                                                                                }
                                                                                                                                    
                                                                                                                                        return length;
                                                                                                                                        }
     
};
