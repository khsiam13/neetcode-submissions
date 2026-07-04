class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxRate = 0;
        for(auto e : piles) {
            maxRate = max(maxRate, e);
        }
        int l = 1, r = maxRate;
        while(l < r) {
            int m = l + (r - l) / 2;
            int hours = 0;
            for(auto e : piles) {
                hours += (e + m - 1) / m;
            }
            if(hours <= h) {
                r = m;
            } else {
                l = m + 1;
            }
        }
        return l;
    }
};
