#include<bits/stdc++.h>
class Solution {
public:
    int maxArea(vector<int>& height) {
        int max=0;
        int now=0;
        int left=0;
        int right=height.size()-1;
        while(left<right){
            now=(right-left)*min(height[left],height[right]);
            if(now>max){
                max=now;
            }
            if(min(height[left],height[right])==height[left]){
                left++;
            }else{
                right--;
            }
        }
        return max;
    }
};
