class Solution {
public:
    int maxDepth(string s) {
        int currentDepth=0;
        int maxDepth=0;
        for(char c:s){
            if(c=='('){
                currentDepth++;
                if(currentDepth>maxDepth){
                    maxDepth=currentDepth;
                }
            }
            if(c==')'){
                currentDepth--;
            }
        }
        return maxDepth;
    }
};