// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         vector<int>num;
//         for(int i=0;i<nums.size();i++){
//             if(num.empty()||num.front()!=nums[i]){
//                 int count=0;
//                 for(int j=0;j<nums.size();j++){
//                     if(nums[i]==nums[j]){
//                         count++;
//                     }
//                 }
//                 if(count>nums.size()/3){
//                     num.push_back(nums[i]);
//                 }
//             }
//             if(num.size()==2){
//                 break;
//             }
//         }
//         return num;
//     }
// };
// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         unordered_map<int, int> freq;
//         vector<int> result;
//         int threshold = nums.size() / 3;

//         for (int num : nums) {
//             freq[num]++;
//             // Only add to result if this is the first time count crosses threshold
//             if (freq[num] == threshold + 1) {
//                 result.push_back(num);
//             }
//         }

//         return result;
//     }
// };    
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0, cnt2=0;
        int el1=INT_MIN,el2=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(cnt1==0&&nums[i]!=el2){
                cnt1=1;
                el1=nums[i];
            }
            else if(cnt2==0&&nums[i]!=el1){
                cnt2=1;
                el2=nums[i];
            }
            else if(nums[i]==el1)cnt1++;
            else if(nums[i]==el2)cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }
        vector<int>ls;
        int ct1=0,ct2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==el1)ct1++;
            else if(nums[i]==el2)ct2++;
        }
        int mini=(int)nums.size()/3+1;
        if(ct1>=mini)ls.push_back(el1);
        if(ct2>=mini)ls.push_back(el2);
        return ls;
    }
};    