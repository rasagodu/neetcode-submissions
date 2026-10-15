class Solution {
public:
    vector<string> generateParenthesis(int n) {
        string curr;
        vector<string> result;
        
        backtrack(0,0, n,curr, result);
        return result;
    }

    void backtrack(int openN,int closedN, int n, string&curr, vector<string>& result){
            if(openN ==n && closedN == n){
                result.push_back(curr);
                return;
            }

            if(openN<n){
                curr.push_back('(');
                backtrack(openN+1,closedN, n, curr, result);
                curr.pop_back();
            }
            if(closedN<openN){
                curr.push_back(')');
                backtrack(openN,closedN +1, n, curr, result);
                curr.pop_back();
            }
        }
};
