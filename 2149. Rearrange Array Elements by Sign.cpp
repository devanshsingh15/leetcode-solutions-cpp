class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) {
        vector<int> pos,neg;
        for(int i=0;i<a.size();i++){
        if(a[i]>0) pos.push_back(a[i]);
        else neg.push_back(a[i]);
        }
        vector<int> ans;
        for(int i=0;i<pos.size();i++){
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
        return ans;
    }
};
