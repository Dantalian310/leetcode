class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());//ÉýÐò
        vector<vector <long long> > numsstate;
        long long num = 1e10;
        int state=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=num){
                num=nums[i];
                vector<long long> now={num,1};
                numsstate.push_back(now);
                state++;
            }else{
                numsstate[state][1]++;
            }
        }
        long long maxm=0;
        int xiabiao=0;
        for(int i=0;i<numsstate.size();i++){
            maxm = max(maxm,numsstate[i][1]);
            if(maxm==numsstate[i][1]){
                xiabiao=i;
            }
        }
        return numsstate[xiabiao][0];        //sort(nums.rbegin(),nums.rend());//½µÐò
    }
};
