class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> f(26, 0);
        int maxf = 0;
        for(auto task : tasks) {
            f[task - 'A']++;
            maxf = max(f[task - 'A'], maxf);
        }
        int maxCount = 0;
        for(auto e : f) 
            if(e == maxf)
                maxCount++;

        return max((maxf - 1) * (n + 1) + maxCount, static_cast<int>(tasks.size()));
    }
};
