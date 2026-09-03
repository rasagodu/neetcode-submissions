class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int r = nums.size()-1;
        int m=0;
        while(l<r){
            m= l + (r-l)/2;
            if(nums[m]<nums[r]){
                if(target>=nums[m] && target <= nums[r]){
                    if(nums[m]==target)return m;
                    else l=m+1;
                }
                else r=m;
            }
            else{
                if(target>=nums[l] && target<=nums[m]){
                    // if(nums[m]==target)return m;
                    r=m;
                }
                else l=m+1;
            }
                
                
            
        }
        if(nums[l]==target)  return l;
        else return -1;
    }
};
