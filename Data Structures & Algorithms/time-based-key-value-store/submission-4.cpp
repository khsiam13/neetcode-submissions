class TimeMap {
private:
    std::unordered_map<std::string, std::vector<std::pair<int, std::string>>> m;
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        if(m.find(key) == m.end()) return "";
        const auto v = m[key];

        int l = 0, r = v.size() - 1;
        string ans = "";
        while(l <= r) {
            int m = l + (r-l) / 2;
            if(v[m].first <= timestamp) {
                ans = v[m].second;
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        return ans;
    }
};
