class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> CH;
        int max=0; 
        int now=0;
        int position=0;   
        for(int i=0;i<s.size();i++){
            if(i>0){
                CH.erase(s[i-1]);
            }
            while(position<s.size()&&!CH.count(s[position])){
                CH.insert(s[position]);
                position++;
            }
            now=position-i;
            if(now>max){
                max=now;
            }
        }
        return max;
    }
};
