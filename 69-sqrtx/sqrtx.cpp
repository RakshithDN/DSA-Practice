class Solution {
public:
    int mySqrt(int x) {
        int low=1,high=x;
        while(low<=high){
            long long mid=high+(low-high)/2;
            if(mid*mid<=x){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;
    }
};