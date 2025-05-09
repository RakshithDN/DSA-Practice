// class Solution {
// public:
//     int noDay(vector<int>& nums, int cap) {
//         int days = 1, load = 0;
//         for (int i = 0; i < nums.size(); i++) {
//             if (load + nums[i] > cap) {
//                 days += 1;
//                 load = 0;
//             }
//             load += nums[i];
//         }
//         return days;
//     }
//     int shipWithinDays(vector<int>& nums, int days) {
//         for (int i = *max_element(nums.begin(), nums.end());
//              i <= accumulate(nums.begin(), nums.end(), 0); i++) {
//             int dayReq = noDay(nums, i);
//             if (dayReq <= days) {
//                 return i;
//             }
//         }
//         return -1;
//     }
// };
class Solution {
public:
    int noDay(vector<int>& nums, int cap) {
        int days = 1, load = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (load + nums[i] > cap) {
                days += 1;
                load = 0;
            }
            load += nums[i];
        }
        return days;
    }
    int shipWithinDays(vector<int>& nums, int days) {
        int low=*max_element(nums.begin(), nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=(low+high)/2;
            int reqDay= noDay(nums,mid);
            if(reqDay<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};