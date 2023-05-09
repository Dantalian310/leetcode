class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector <int> > num1;
        int m=0;
        for(int i=0;i<nums.size();i++){
            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }
            int k=nums.size()-1;
            //m=0-nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(j>i+1&&nums[j]==nums[j-1]){
                    continue;
                }
                m=0-nums[i]-nums[j];
                while(nums[k]>m&&j<k){
                    k--;
                }
                if(j==k){
                    break;
                }
                if(nums[k]==m){
                    num1.push_back({nums[i],nums[j],nums[k]});
                }
            }
        }
        // sort(num1.begin(),num1.end());
        // num1.erase(unique(num1.begin(),num1.end()),num1.end());//È¥³ýÖØ¸´ÔªËØ
        return num1;
    }
};
