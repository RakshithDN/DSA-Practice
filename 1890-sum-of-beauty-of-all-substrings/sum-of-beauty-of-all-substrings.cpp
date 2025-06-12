class Solution {
public:
    int beautySum(string s) {
        int totalBeauty = 0;
        int n = s.length();
        
        for (int i = 0; i < n; ++i) {
            vector<int> freq(26, 0); // character frequency for current substring
            for (int j = i; j < n; ++j) {
                freq[s[j] - 'a']++; // update frequency

                int maxFreq = 0, minFreq = INT_MAX;
                for (int k = 0; k < 26; ++k) {
                    if (freq[k] > 0) {
                        maxFreq = max(maxFreq, freq[k]);
                        minFreq = min(minFreq, freq[k]);
                    }
                }
                totalBeauty += (maxFreq - minFreq);
            }
        }
        return totalBeauty;
    }
};