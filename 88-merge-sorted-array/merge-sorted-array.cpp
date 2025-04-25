// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         vector<int> arr; // Use push_back to avoid out-of-bounds
//         int left = 0, right = 0;

//         while (left < m && right < n) {
//             if (nums1[left] <= nums2[right]) {
//                 arr.push_back(nums1[left++]);
//             } else {
//                 arr.push_back(nums2[right++]);
//             }
//         }

//         while (left < m) {
//             arr.push_back(nums1[left++]);
//         }

//         while (right < n) {
//             arr.push_back(nums2[right++]);
//         }

//         for (int i = 0; i < m + n; ++i) {
//             nums1[i] = arr[i];
//         }
//     }
// };

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left=m-1;
        int right=n-1;
        int k=m+n-1;
        while(left>=0 && right>=0){
            if(nums1[left]>nums2[right]){
                nums1[k--]=nums1[left--];
            }
            else{
                nums1[k--]=nums2[right--];
            }
        }
        while(right>=0){
            nums1[k--]=nums2[right--];
        }
    }
};