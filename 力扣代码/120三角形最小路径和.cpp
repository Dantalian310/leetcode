class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int minroad=triangle[0][0];
        //int nowroad=triangle[0][0];
        int status[205][205];
        status[0][0]=triangle[0][0];
        //minroad=triangle[i][j]+min(triangle[i-1][j-1],triangle[i-1][j])
        for(int i=1;i<triangle.size();i++){
            for(int j=0;j<i+1;j++){
                if(i-1>=0&&j-1>=0&&j<i){
                    status[i][j]=triangle[i][j]+min(status[i-1][j-1],status[i-1][j]);
                }else if(j==0){
                    status[i][j]=triangle[i][j]+status[i-1][j];
                }else if(j==i){
                    status[i][j]=triangle[i][j]+status[i-1][j-1];
                }
            }
        }
        // for(int i=0;i<triangle.size();i++){
        //     cout<<status[1][i]<<" ";
        // }
        int ans=status[triangle.size()-1][0];
        for(int i=0;i<triangle.size();i++){
            ans=min(ans,status[triangle.size()-1][i]);
        }
        return ans;
    }
};
