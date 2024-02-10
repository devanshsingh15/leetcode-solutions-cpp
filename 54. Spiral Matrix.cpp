class Solution 
{
public:
    vector<int> spiralOrder(vector<vector<int>>& m) 
    {
        vector<int>ans;
        int n = m.size(),k = m[0].size();

        int t = 0 , b = n-1 , l = 0 , r = k - 1;

        while(t<=b and l<=r)
        {
            for(int i=l;i<=r and t<=b;i++)
            {
                ans.push_back(m[t][i]);
            }
            t++;
            for(int i=t;i<=b and l<=r ;i++)
            {
                ans.push_back(m[i][r]);
            }
            r--;
            for(int i=r;i>=l and t<=b;i--)
            {
                ans.push_back(m[b][i]);
            }
            b--;
            for(int i=b;i>=t and l<=r;i--)
            {
                ans.push_back(m[i][l]);
            }
            l++;
        }
    return ans;
    }
};
