class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                nums.erase(nums.begin()+i);//该函数删除元素之后数组长度自动减一
                i--;
            }
        }
        return nums.size();
    }
};
