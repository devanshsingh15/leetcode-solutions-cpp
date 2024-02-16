class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n=arr.size();
        unordered_map<int,int> mp;
        for(auto it:arr){
            mp[it]++;
        }

        multimap<int,int> mm;
        for(auto it:mp){
            mm.insert({it.second,it.first});
        }
        int cnt=0;
        for(auto it=mm.begin();it!=mm.end();it++){
            k-=it->first;
            if(k<0) return mm.size()-cnt;
            cnt++;
        }
        return 0;   
    }

};
