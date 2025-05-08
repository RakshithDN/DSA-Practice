class Solution {
public:
    bool possible(vector<int>&arr,int day,int m,int k){
        int count=0,numB=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=day){
                count++;
            }
            else{
                numB+=(count/k);
                count=0;
            }
        }
        numB+=(count/k);
        return numB>=m;
    }
    int minDays(vector<int>& arr, int m, int k) {
        int n=arr.size();
        long long val=m*1LL*k;
        if(val>n)return -1;
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i=0;i<n;i++){
            mini=min(mini,arr[i]);
            maxi=max(maxi,arr[i]);
        }
        int low=mini,high=maxi;
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(arr,mid,m,k)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};