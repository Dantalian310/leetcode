/**
给你一个整数数组 nums 。你可以选定任意的 正数 startValue 作为初始值。 

 你需要从左到右遍历 nums 数组，并将 startValue 依次累加上 nums 数组中的值。 

 请你在确保累加和始终大于等于 1 的前提下，选出一个最小的 正数 作为 startValue 。 

 

 示例 1： 

 
输入：nums = [-3,2,-3,4,2]
输出：5
解释：如果你选择 startValue = 4，在第三次累加时，和小于 1 。
                累加求和
                startValue = 4 | startValue = 5 | nums
                  (4 -3 ) = 1  | (5 -3 ) = 2    |  -3
                  (1 +2 ) = 3  | (2 +2 ) = 4    |   2
                  (3 -3 ) = 0  | (4 -3 ) = 1    |  -3
                  (0 +4 ) = 4  | (1 +4 ) = 5    |   4
                  (4 +2 ) = 6  | (5 +2 ) = 7    |   2
 

 示例 2： 

 
输入：nums = [1,2]
输出：1
解释：最小的 startValue 需要是正数。
 

 示例 3： 

 
输入：nums = [1,-2,-3]
输出：5
 

 

 提示： 

 
 1 <= nums.length <= 100 
 -100 <= nums[i] <= 100 
 

 Related Topics 数组 前缀和 👍 108 👎 0

*/

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int accSum = 0, accSumMin = 0;
        for (int num : nums) {
            accSum += num;
            accSumMin = min(accSumMin, accSum);
        }
        return -accSumMin + 1;
    }
};

/*
 * 贪心算法
要保证所有的累加和 accSum\textit{accSum}accSum 满足 accSum+startValue≥1\textit{accSum} + \textit{startValue} \ge 1accSum+startValue≥1，只需保证累加和的最小值 accSumMin\textit{accSumMin}accSumMin 满足 accSumMin+startValue≥1\textit{accSumMin} + \textit{startValue} \ge 1accSumMin+startValue≥1，那么 startValue\textit{startValue}startValue 的最小值即可取 −accSumMin+1-\textit{accSumMin} + 1−accSumMin+1。
*/
//leetcode submit region end(Prohibit modification and deletion)
