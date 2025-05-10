class Solution {
public:
    int countStu(vector<int>&arr,int page){
        int student=1;
        long long pages=0;
        for(int i=0;i<arr.size();i++){
            if(pages+arr[i]<=page){
                pages+=arr[i];
            }
            else{
                student++;
                pages=arr[i];
            }
        }
        return student;
    }
    int splitArray(vector<int>& arr, int k) {
        int n=arr.size();
        if(k>n)return -1;
        int low=*max_element(arr.begin(),arr.end());
        int high=accumulate(arr.begin(),arr.end(),0);
        while(low<=high){
            int mid=(low+high)/2;
            int noStudent=countStu(arr,mid);
            if(noStudent<=k){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};