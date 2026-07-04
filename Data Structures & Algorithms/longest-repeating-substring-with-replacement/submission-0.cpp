class Solution {
public:
    int characterReplacement(string s, int k) {
      int maxWindow = 0;
      int l = 0, r = 0;
      int window = 0; int maxFreq = 0;
      vector<int> arr(26,0);
      while(r < s.size())  {
        arr[s[r] - 'A']++;
        maxFreq = max(maxFreq, arr[s[r] - 'A']);
        window = r - l + 1;
        if(window - maxFreq > k) {
            --arr[s[l++] - 'A'];
        }
        maxWindow = max(maxWindow, r - l + 1);
        r++;
      }
      return maxWindow;
    }
};