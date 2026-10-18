class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if(cost.size() == 1) return cost[0];
        if(cost.size() == 2) return min(cost[0], cost[1]);
        vector<int> cache;
        cache.push_back(cost[cost.size() - 1]);
        cache.push_back(0);
        // cache.push_back(min((cost[0] + cost[2]), cost[1]))
        int i = cost.size() - 2;
        int temp = 0;
        int minimum = 0;
        while(i!=-1){
            temp = cache[0];
            minimum = min(cache[1] + cost[i],cost[i] + cache[0]);
            cache[1] = temp;
            cache [0] = minimum;
            i--;
        }
        return min(cache[0], cache[1]);


    }
};
;
