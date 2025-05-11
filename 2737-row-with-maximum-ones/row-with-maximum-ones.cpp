class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = (n > 0) ? mat[0].size() : 0;
        int cnt_max = 0;
        int index = 0;

        for (int i = 0; i < n; i++) {
            int cnt_ones =
                count(mat[i].begin(), mat[i].end(), 1); 
            if (cnt_ones > cnt_max || (cnt_ones == cnt_max && i < index)) {
                cnt_max = cnt_ones;
                index = i;
            }
        }

        return {index, cnt_max};
    }
};