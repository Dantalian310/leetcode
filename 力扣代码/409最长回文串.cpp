class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> num;//������ͼ���н�ÿ���ַ����ֵĴ���
        for (char c : s){
            num[c]++;
        }
        int ans = 0;
        for (auto p : num) {//��������ͼ
            int v = p.second;
            ans += v / 2 * 2;//��ÿ���ַ��ܹ����̶ȵر�ʹ��
            if (v % 2 == 1 and ans % 2 == 0)//�ж��Ƿ���һ���ַ��ĸ����������Ϊ�������ַ���Ҫ��
                ans++;
        }
        return ans;
    }
};
