class Solution {
public:

    string encode(vector<string>& strs) {
        std::string output;
        for(auto& s : strs) {
            output += to_string(s.size());
            output += '#';
            output += s;
        }
        return output;
    }

    vector<string> decode(string s) {
        std::vector<std::string> output;
        int i = 0;
        while(i < s.size()) {
            int j = i;
            while(s[j] != '#') j++;
            int wordSize = stoi(s.substr(i, j - i));
            output.push_back(s.substr(j+1, wordSize));
            i = j + 1 + wordSize;
        }
        return output;
    }
};
