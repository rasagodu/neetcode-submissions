class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       vector<int> res(temperatures.size(),0);
       stack<int> index;
       for(int i=0;i<temperatures.size();i++){
        if(index.empty()|| temperatures[i]<= temperatures[i-1]) index.push(i);
        else{

            
                while(!index.empty() && temperatures[index.top()]<temperatures[i]){
                    res[index.top()] = i-index.top();
                    index.pop();
                }
                index.push(i);
            

        }
       }
       return res;
    }
};
