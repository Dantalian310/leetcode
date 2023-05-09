class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> num;//用无向图来承接每个字符出现的次数
        for (char c : s){
            num[c]++;
        }
        int ans = 0;
        for (auto p : num) {//遍历无向图
            int v = p.second;
            ans += v / 2 * 2;//让每个字符能够最大程度地被使用
            if (v % 2 == 1 and ans % 2 == 0)//判断是否有一个字符的个数能满足成为串中心字符的要求
                ans++;
        }
        return ans;
    }
};
