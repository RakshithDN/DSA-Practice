class Solution {
public:
    int beautySum(string s) {
        int totalBeauty=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            vector<int>freq(26,0);
            for(int j=i;j<n;j++){
                freq[s[j]-'a']++;
                int mini=INT_MAX;
                int maxi=0;
                for(int k=0;k<26;k++){
                    if(freq[k]>0){
                        mini=min(mini,freq[k]);
                        maxi=max(maxi,freq[k]);
                    }
                }
                totalBeauty+=maxi-mini;
            }
        }
        return totalBeauty;
    }
};