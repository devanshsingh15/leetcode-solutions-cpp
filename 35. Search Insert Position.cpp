class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                return i;
            }
            else
            {
                for(int i=0;i<nums.size();i++)
                {
                    if(nums[0]>target)
                    {
                        return 0;
                    }
                    else if(nums[nums.size()-1]<target)
                    {
                        return nums.size();
                    }
                    else if(target-nums[i]==1)
                    {
                        return i+1;
                    }
                }
            }
        }
        return 1;
    }
};
