//brite force
// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//        int count=0;
//        int n=nums.size();
//        for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//             sum+=nums[j];
//             if(sum==k){
//                 count++;
//             }
//         }
//        }
//        return count; 
//     }
// };
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>mpp;
        mpp[0]=1;
        int prefixsum=0,cnt=0;
        for(int i=0;i<nums.size();i++){
            prefixsum+=nums[i];
            int remove=prefixsum-k;
            cnt+=mpp[remove];
            mpp[prefixsum]+=1;
        }
        return cnt;
    }
};