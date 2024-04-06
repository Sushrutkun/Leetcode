class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int par = 0;
        string ans = "";
        string final_ans = "";
        for(int i=0;i<s.size();i++){
            if(s[i]==')'){
                if(par>0){
                    par--;
                    ans+=s[i];
                }
            }
            else if(s[i]=='('){
                par++;
                ans+=s[i];
            }
            else{
                ans+=s[i];
            }
        }
        for(int i=ans.size()-1;i>=0;i--){
            if(par>0 && ans[i]=='('){
                par--;
                continue;
            }
            else{
                final_ans+=ans[i];
            }
            
        }
        reverse(final_ans.begin(),final_ans.end());
        return final_ans;
    }
};