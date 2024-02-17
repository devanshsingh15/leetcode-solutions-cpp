class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        priority_queue<int> q;
        int i;
        for(i=0;i<h.size()-1;i++){
            int d=h[i+1]-h[i];
            if(h[i]>h[i+1]) continue;
            if(d<=b){
                b-=d;
                q.push(d);
            }
            else if(l>0){
                if(q.size()){
                    int x=q.top();
                    if(x>d){
                        q.pop();
                        b+=x;
                        q.push(d);
                        b-=d;
                    }
                }
                l--;
            }
            else break;
        }
        return i;

    }
};
