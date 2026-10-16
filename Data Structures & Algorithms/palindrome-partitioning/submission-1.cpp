class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> current;
        dfs(0,s,current, result);
        
        return result;
    }

    void dfs( int i, string s, vector<string>& current, vector<vector<string>>& result){
        if(i>=s.size()){
            result.push_back(current);
            return;
        }
        for(int j=i; j<s.size(); j++){
            if(isPali(s,i,j)){
                current.push_back(s.substr(i,j - i + 1));
                dfs(j + 1, s, current, result);
                current.pop_back();
            }
        }
    }

    bool isPali(string s, int i, int j){
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }


};
