class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> people(n+1, 0);
        for(int i=0; i<trust.size(); i++){
            people[trust[i][1]]++; 
            people[trust[i][0]]--; 
        }

        int label = -1, cnt = 0;
        for(int i=1; i<=n; i++){
            if(label == -1 && people[i] == n-1){
                label = i;
                cnt++;
                if(cnt > 1) return -1;
            } 
        }
        return label;
    }
};
