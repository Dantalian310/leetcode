class Solution {
public:
    int climbStairs(int n) {
        long long num[50];
        num[0]=0;
        num[1]=1;
        num[2]=2;
        for(int i=3;i<49;i++){
            num[i]=num[i-1]+num[i-2];
        }
        return num[n];
    }
};
