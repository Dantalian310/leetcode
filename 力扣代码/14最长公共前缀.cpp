class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minlength=205;
        int now=205;
        for(int i=0;i<strs.size();i++){
            now=strs[i].size();
            if(now<minlength){
                minlength=now;
            }
        }
        string ch="";
        int state=0;
        for(int i=0;i<minlength;i++){
            for(int j=0;j<strs.size();j++){
                if(strs[j][i]!=strs[0][i]){
                    state=1;
                    break;
                }
            }
            if(state==1){
                break;
            }else{
                ch.push_back(strs[0][i]);
            }
        }
        return ch;
    }
};
