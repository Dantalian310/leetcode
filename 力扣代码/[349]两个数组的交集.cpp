/**
给定两个数组 nums1 和 nums2 ，返回 它们的交集 。输出结果中的每个元素一定是 唯一 的。我们可以 不考虑输出结果的顺序 。 

 

 示例 1： 

 
输入：nums1 = [1,2,2,1], nums2 = [2,2]
输出：[2]
 

 示例 2： 

 
输入：nums1 = [4,9,5], nums2 = [9,4,9,8,4]
输出：[9,4]
解释：[4,9] 也是可通过的
 

 

 提示： 

 
 1 <= nums1.length, nums2.length <= 1000 
 0 <= nums1[i], nums2[i] <= 1000 
 

 Related Topics 数组 哈希表 双指针 二分查找 排序 👍 765 👎 0

*/

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int nums[1005];
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums1.size();i++){
            if(nums[nums1[i]]==0){
                nums[nums1[i]]++;
            }
        }
        for(int i=0;i<nums2.size();i++){
            if(nums[nums2[i]]==1){
                nums[nums2[i]]++;
            }
        }
        vector<int> res;
        for(int i=0;i<1005;i++){
            if(nums[i]==2){
                res.push_back(i);
            }
        }
        return res;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
