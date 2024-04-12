class Solution {
public:
    vector<int> left(vector<int>& height, int n){
        vector<int> maxLeft(n);
        maxLeft[0]=height[0];
        for(int i=1;i<n;i++){
            maxLeft[i]=max(height[i],maxLeft[i-1]);
        }
        return maxLeft;
    }
    vector<int> right(vector<int>& height, int n){
        vector<int> maxRight(n);
        maxRight[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            maxRight[i]=max(height[i],maxRight[i+1]);
        }
        return maxRight;
    }
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> leftMax=left(height, n);
        vector<int> rightMax=right(height, n);
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+min(leftMax[i],rightMax[i])-height[i];
        }
        return sum;
    }
};
