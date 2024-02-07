class Solution {
public:
    int jump(vector<int>& nums) {
        queue<int>Q;
        int N=nums.size();
        vector<int>status(N,-1);
        Q.push(0);
        status[0]=0;
        if(N>1){
            while(Q.size()!=0){
                int x=Q.front();
                Q.pop();
                for(int j=1;j<=nums[x];j++){
                    if(status[x+j]==-1){
                        status[x+j]=status[x]+1;
                        Q.push(x+j);
                    }
                    if(x+j==N-1)
                        return status[x+j];
                }
            }
        }
        else{
            if(N==1)
                return 0;
        }
        return -1;
    }
};
