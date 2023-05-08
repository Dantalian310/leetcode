class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;
        int state = (digits[n]+1)/10;
        digits[n] = (digits[n]+1)%10;
        for(int i=n-1;i>=0;i--){
            if(state==1){
                state = (digits[i]+1)/10;
                digits[i] = (digits[i]+1)%10;
            }
        }
        if(state==1){
            vector<int> digits2;
            digits2.push_back(1);
            for(int i=1;i<digits.size()+1;i++){
                digits2.push_back(digits[i-1]);
            }
            return digits2;
        }else{
            return digits;
        }
    }
};
