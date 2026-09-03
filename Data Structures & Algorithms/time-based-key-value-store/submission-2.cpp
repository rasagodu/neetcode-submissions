class TimeMap {
    
public:
    unordered_map<string, vector<pair<string,int>>> values;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        values[key].push_back({value,timestamp});
    }
    
    string get(string key, int timestamp) {
       const vector<pair<string,int>>& v = values[key];
        int n=v.size();
        int l=0;
        int r=n-1;
        string res;
        while(l<=r){
            int m= l + (r-l)/2;
            if (v[m].second > timestamp) r=m-1;
            else if(v[m].second == timestamp) return v[m].first;
            else{
                res=v[m].first;
                l=m+1;
            }
        }
        return res;
    }
};
