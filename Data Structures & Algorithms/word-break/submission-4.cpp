class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> dp(s.size(), false);
        dp[s.size()]= true;
        for(int i = s.size() - 1;i>=0;i--){
            for(const auto&w : wordDict){
                if(w.size()<= s.size() - i && s.substr(i,w.size()) == w){
                    dp[i] = dp[i + w.size()];
                }
                if(dp[i]) break;

            }
        }
        return dp[0];
    }
};
