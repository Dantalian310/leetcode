/**
给定一个整数数组 nums，处理以下类型的多个查询: 

 
 计算索引 left 和 right （包含 left 和 right）之间的 nums 元素的 和 ，其中 left <= right 
 

 实现 NumArray 类： 

 
 NumArray(int[] nums) 使用数组 nums 初始化对象 
 int sumRange(int i, int j) 返回数组 nums 中索引 left 和 right 之间的元素的 总和 ，包含 left 和 
right 两点（也就是 nums[left] + nums[left + 1] + ... + nums[right] ) 
 

 

 示例 1： 

 
输入：
["NumArray", "sumRange", "sumRange", "sumRange"]
[[[-2, 0, 3, -5, 2, -1]], [0, 2], [2, 5], [0, 5]]
输出：
[null, 1, -1, -3]

解释：
NumArray numArray = new NumArray([-2, 0, 3, -5, 2, -1]);
numArray.sumRange(0, 2); // return 1 ((-2) + 0 + 3)
numArray.sumRange(2, 5); // return -1 (3 + (-5) + 2 + (-1)) 
numArray.sumRange(0, 5); // return -3 ((-2) + 0 + 3 + (-5) + 2 + (-1))
 

 

 提示： 

 
 1 <= nums.length <= 10⁴ 
 -10⁵ <= nums[i] <= 10⁵ 
 0 <= i <= j < nums.length 
 最多调用 10⁴ 次 sumRange 方法 
 

 Related Topics 设计 数组 前缀和 👍 556 👎 0

*/

//leetcode submit region begin(Prohibit modification and deletion)
class NumArray {
public:
    vector<int> sums;

    NumArray(vector<int>& nums) {
        int n = nums.size();
        sums.resize(n + 1);
        for (int i = 0; i < n; i++) {
            sums[i + 1] = sums[i] + nums[i];
        }
    }

    int sumRange(int i, int j) {
        return sums[j + 1] - sums[i];
    }
};
/*可以在初始化的时候计算出数组 nums\textit{nums}nums 在每个下标处的前缀和，即可满足每次调用 sumRange\text{sumRange}sumRange 的时间复杂度都是 O(1)O(1)O(1)。

具体实现方面，假设数组 nums\textit{nums}nums 的长度为 nnn，创建长度为 n+1n+1n+1 的前缀和数组 sums\textit{sums}sums，对于 0≤i<n0 \le i<n0≤i<n 都有 sums[i+1]=sums[i]+nums[i]\textit{sums}[i+1]=\textit{sums}[i]+\textit{nums}[i]sums[i+1]=sums[i]+nums[i]，则当 0<i≤n0<i \le n0<i≤n 时，sums[i]\textit{sums}[i]sums[i] 表示数组 nums\textit{nums}nums 从下标 000 到下标 i−1i-1i−1 的前缀和。
*/

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
//leetcode submit region end(Prohibit modification and deletion)
