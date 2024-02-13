class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> c;
        for(int i=0;i<nums1.size();i++){
            c.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            c.push_back(nums2[i]);
        }
        sort(c.begin(),c.end());
        int z=c.size();
        if(z%2!=0)
            return double(c[z/2]);
        double res=(c[z/2]+c[z/2-1])/2.0;
        return res;
    }
};
