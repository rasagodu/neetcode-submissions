class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_vol=0;
        int width=0;
        int length=0;
        int l=0;
        int r=heights.size()-1;
        int vol=0;
        while(l<r){
            width=r-l;
            length=min(heights[l],heights[r]);
            vol=length*width;
            max_vol=max(max_vol,vol);
            if(heights[l]<heights[r])l++;
            else r--;
        }
        return max_vol;
    }
};
