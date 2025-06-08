class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>freq;
        for(auto c:s){
            freq[c]++;
        }
        priority_queue<pair<int,char>>maxHeap;
        for(auto &entry:freq){
            maxHeap.push({entry.second,entry.first});
        }
        string result;
        while(!maxHeap.empty()){
            auto[count,ch]=maxHeap.top();
            maxHeap.pop();
            result+=string(count,ch);
        }
        return result;
    }
};