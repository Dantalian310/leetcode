class Solution {
    string S[13]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int Snum[13]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
public:
    string intToRoman(int num) {
        string s="";
        for(int i=12;i>=0;i--){
            while(num>=Snum[i]){
                s=s+S[i];
                num=num-Snum[i];
            }
        }
        return s;
    }
};
