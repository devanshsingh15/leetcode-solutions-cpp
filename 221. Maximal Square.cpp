class Solution {
public:
    int solve(vector<vector<char>>& matrix, int& maxi, int i, int j, int row, int col,vector<vector<int>>& dp){
        
        
        

        if(i>=row || j>=col) return 0;

        if(dp[i][j]!=-1) return dp[i][j];

        int right=solve(matrix,maxi,i,j+1,row,col,dp);
        int down=solve(matrix,maxi,i+1,j,row,col,dp);
        int diag=solve(matrix,maxi,i+1,j+1,row,col,dp);

        if(matrix[i][j]=='1'){
            int ans=1+min(right,min(down,diag));
            maxi=max(maxi,ans);
            return dp[i][j]=ans;
        }
        else {
            return 0;
        }


    }
    int maximalSquare(vector<vector<char>>& matrix) {
        
        int row=matrix.size();
        int col=matrix[0].size();
        vector<vector<int>> dp(row,vector<int>(col,-1));
        int maxi=0;
        int i=0;
        int j=0;
        int ans=solve(matrix,maxi,i,j,row,col,dp);
        return maxi*maxi;
    }
};
