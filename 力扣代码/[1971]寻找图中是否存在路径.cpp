/**
有一个具有 n 个顶点的 双向 图，其中每个顶点标记从 0 到 n - 1（包含 0 和 n - 1）。图中的边用一个二维整数数组 edges 表示，其中 
edges[i] = [ui, vi] 表示顶点 ui 和顶点 vi 之间的双向边。 每个顶点对由 最多一条 边连接，并且没有顶点存在与自身相连的边。 

 请你确定是否存在从顶点 source 开始，到顶点 destination 结束的 有效路径 。 

 给你数组 edges 和整数 n、source 和 destination，如果从 source 到 destination 存在 有效路径 ，则返回 
true，否则返回 false 。 

 

 示例 1： 
 
 
输入：n = 3, edges = [[0,1],[1,2],[2,0]], source = 0, destination = 2
输出：true
解释：存在由顶点 0 到顶点 2 的路径:
- 0 → 1 → 2 
- 0 → 2
 

 示例 2： 
 
 
输入：n = 6, edges = [[0,1],[0,2],[3,5],[5,4],[4,3]], source = 0, destination = 5
输出：false
解释：不存在由顶点 0 到顶点 5 的路径.
 

 

 提示： 

 
 1 <= n <= 2 * 10⁵ 
 0 <= edges.length <= 2 * 10⁵ 
 edges[i].length == 2 
 0 <= ui, vi <= n - 1 
 ui != vi 
 0 <= source, destination <= n - 1 
 不存在重复边 
 不存在指向顶点自身的边 
 

 Related Topics 深度优先搜索 广度优先搜索 并查集 图 👍 147 👎 0

*/

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        for (auto &&edge : edges) {
            int x = edge[0], y = edge[1];
            adj[x].emplace_back(y);
            adj[y].emplace_back(x);
        }
        /*通过以上步骤，这段代码的目的是构建一个图的邻接表表示法。邻接表是一种常见的图表示方法，其中每个节点的邻居节点存储在一个列表中。*/
        vector<bool> visited(n, false);
        queue<int> qu;
        qu.emplace(source);
        visited[source] = true;
        /*这段代码的目的是初始化节点的访问状态。通过创建一个布尔类型的向量 visited，初始时所有节点的访问状态都被设置为 false。然后，将源节点 source 添加到整数队列 qu 中，并将其对应的访问状态设置为 true，表示源节点已经被访问过。

这种访问状态的初始化通常用于图的遍历算法，例如广度优先搜索（BFS）。在 BFS 中，我们从源节点开始，逐层遍历图的节点，将已访问的节点标记为 true，并将它们的邻居节点加入队列中以供后续遍历。通过初始化访问状态和队列，我们可以在图的遍历过程中跟踪哪些节点已经被访问过。*/
        while (!qu.empty()) {
            int vertex = qu.front();
            qu.pop();
            if (vertex == destination) {
                break;
            }
            for (int next: adj[vertex]) {
                if (!visited[next]) {
                    qu.emplace(next);
                    visited[next] = true;
                }
            }
        }
        return visited[destination];
    }
};
//leetcode submit region end(Prohibit modification and deletion)
