class Solution {
public:
    int maxDepth(string s) {
        int size = 0;
        int ans = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')size++;
            else if(s[i]==')')size--;
            ans = max(ans,size);
        }
        return ans;
    }
};