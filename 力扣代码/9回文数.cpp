class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        string xx = to_string(x);
        int state = 1;
        for(int i=0;i<(xx.size()+1)/2;i++){
            if(xx[i]!=xx[xx.size()-i-1]){
                state = 0;
                break;
            }
        }
        if(state==1){
            return true;
        }else{
            return false;
        }
    }
};
