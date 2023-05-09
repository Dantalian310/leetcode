class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int state=0;
        int m,n;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    state=1;
                    m=i;
                    n=j;
                    break;
                }
            }
            if(state==1){
                break;
            }
        }
        vector<int> tS;
        tS.push_back(m);
        tS.push_back(n);
        return tS;
    }
};
