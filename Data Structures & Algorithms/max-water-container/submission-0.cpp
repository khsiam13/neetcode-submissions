class Solution {
public:

int maxArea(std::vector<int>& heights) {
    int first = 0;
        int last = heights.size() - 1;
            int max_area = 0;

                while (first < last) {
                        int area = (last - first) * std::min(heights[first], heights[last]);
                                max_area = std::max(max_area, area);
                                        
                                                if (heights[first] > heights[last]) {
                                                            last--;
                                                                    } else {
                                                                                first++;
                                                                                        }
                                                                                            }
                                                                                                
                                                                                                    return max_area;
                                                                                                    }

    };
