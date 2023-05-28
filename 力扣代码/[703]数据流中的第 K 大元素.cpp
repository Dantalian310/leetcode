/**
设计一个找到数据流中第 k 大元素的类（class）。注意是排序后的第 k 大元素，不是第 k 个不同的元素。 

 请实现 KthLargest 类： 

 
 KthLargest(int k, int[] nums) 使用整数 k 和整数流 nums 初始化对象。 
 int add(int val) 将 val 插入数据流 nums 后，返回当前数据流中第 k 大的元素。 
 

 

 示例： 

 
输入：
["KthLargest", "add", "add", "add", "add", "add"]
[[3, [4, 5, 8, 2]], [3], [5], [10], [9], [4]]
输出：
[null, 4, 5, 5, 8, 8]

解释：
KthLargest kthLargest = new KthLargest(3, [4, 5, 8, 2]);
kthLargest.add(3);   // return 4
kthLargest.add(5);   // return 5
kthLargest.add(10);  // return 5
kthLargest.add(9);   // return 8
kthLargest.add(4);   // return 8
 

 
提示：

 
 1 <= k <= 10⁴ 
 0 <= nums.length <= 10⁴ 
 -10⁴ <= nums[i] <= 10⁴ 
 -10⁴ <= val <= 10⁴ 
 最多调用 add 方法 10⁴ 次 
 题目数据保证，在查找第 k 大元素时，数组中至少有 k 个元素 
 

 Related Topics 树 设计 二叉搜索树 二叉树 数据流 堆（优先队列） 👍 432 👎 0

*/

//leetcode submit region begin(Prohibit modification and deletion)
class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> q;//priority_queue<int, vector<int>, greater<int>> q;语句的作用是创建一个名为q的优先级队列对象，该队列以递增顺序存储int类型的元素。
    int k;
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for (auto& x: nums) {
            add(x);
        }
    }

    int add(int val) {
        q.push(val);
        if (q.size() > k) {
            q.pop();
        }
        return q.top();
    }
};

/*优先队列（Priority Queue）是一种特殊的队列数据结构，其中的每个元素都有一个与之相关的优先级。在优先队列中，元素按照优先级的顺序进行插入和访问操作，而不是按照它们被插入的顺序。

与普通队列不同，优先队列中的元素并不以先进先出（FIFO）的方式进行访问。相反，每次从优先队列中删除元素时，具有最高优先级的元素被首先删除。

优先队列的特性使得它适用于许多问题，例如任务调度、最短路径算法、堆排序等。在实现优先队列时，常用的数据结构是堆（Heap），它能够快速地插入和删除具有最高优先级的元素。

在C++中，priority_queue是一个内置的优先队列容器，提供了简单且高效的优先队列实现。通过指定元素类型和比较函数，可以根据自定义的优先级规则对元素进行排序。常见的比较函数包括greater（最小元素优先）和less（最大元素优先）。

总结起来，优先队列是一种根据元素的优先级进行插入和访问操作的队列，其中具有最高优先级的元素首先被访问和删除。*/

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
//leetcode submit region end(Prohibit modification and deletion)
