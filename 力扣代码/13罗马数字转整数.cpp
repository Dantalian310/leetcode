class Solution {
    char S[7]={'I','V','X','L','C','D','M'};
    int Snum[7]={1,5,10,50,100,500,1000};
public:
    int romanToInt(string s) {
        int num=0;
        for(int i=0;i<s.size();i++){
            for(int j=6;j>=0;j--){
                if(s[i]==S[j]){
                    if((i<s.size()-1)&&j<6&&s[i+1]==S[j+1]){
                        num=num-Snum[j];
                    }else if((i<s.size()-1)&&j<5&&s[i+1]==S[j+2]){
                        num=num-Snum[j];
                    }else{
                        num=num+Snum[j];
                    }
                }
            }
        }
        return num;
    };
};
