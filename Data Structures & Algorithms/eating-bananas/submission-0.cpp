class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int large= INT_MIN;
        int small = 1;
        int n= piles.size();
        int res=0;
        for(int i=0;i<n;i++){
            large = max(large,piles[i]);
        }
        // cout<< large;
        int k=0;
        while(small<=large){
            k= (small +large)/2;
            long time=0;
            for(int i=0;i<n;i++){                                           
                time += ceil((double)piles[i]/k);
            }
            if(time>h) {
                // res=k;
                small = k+1;  
            }
            else if(time<=h) {
                res=k;
                large = k-1;  
            }
            
        }
       
        return res;
    }
};
 