class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int max=0;
        int n=0;
        for(int i=0;i<s.size();i++){
            if(n<g.size()&&s[i]>=g[n]){
                max++;
                n++;
            }
        }
        return max;
    }
};
