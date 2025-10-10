class Solution {
public:
     void func(int sum, int last, vector<int> &nums, int k, vector<vector<int>> &ans) {
        // If the sum is zero and the number of elements is k
        if(sum == 0 && nums.size() == k) {
            // Add the current combination to the answer
            ans.push_back(nums);
            return; 
        }
        // If the sum is less than or equal to zero or the number of elements exceeds k
        if(sum <= 0 || nums.size() > k) return; 

        // Iterate from the last number to 9
        for(int i = last; i <= 9; i++) {
            // If the current number is less than or equal to the sum
            if(i <= sum) {
                // Add the number to the current combination
                nums.push_back(i); 
                // Recursive call with updated sum and next number
                func(sum - i, i + 1, nums, k, ans); 
                // Remove the last number to backtrack
                nums.pop_back(); 
            } else {
                // If the number is greater than the sum, break the loop
                break;
            }
        }
    } 
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans; 
        vector<int> nums; 
        // Call the recursive function with initial parameters
        func(n, 1, nums, k, ans);
        return ans;
    }
};