class Solution {
public:

    long long totalH(vector<int>&piles,int h){
        int n=piles.size();
        long long totalHours=0;
        for(int i=0;i<n;i++){
            totalHours += (piles[i] + h - 1) / h;
        }
        return totalHours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high = *max_element(piles.begin(), piles.end());
        while(low<=high){
            int mid = low + (high - low) / 2;
            long long totalh = totalH(piles,mid);
            if(totalh<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
       }
       return low;
    }
};