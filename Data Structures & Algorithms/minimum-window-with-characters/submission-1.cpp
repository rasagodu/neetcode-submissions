class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size()>s.size() || t.empty()) return "";
        unordered_map<char , int> t_f;
        unordered_map <char, int> s_f;
        int res_length = INT_MAX;
        pair<int , int> final_result = {-1,-1};
        for(char c : t){
            t_f[c]++;
        } 
        int have_letters = 0;
        int need_letters = t_f.size();
        int l=0;
        for(int r=0;r<s.size();r++){
            char c = s[r];
            s_f[c]++;
            if(t_f.count(c) && s_f[c]==t_f[c]) have_letters ++;
            while(have_letters == need_letters){
                    if((r - l + 1) < res_length){
                    res_length = r - l + 1;
                    final_result = {l,r};
                    }
                    s_f[s[l]]--;
                    if(t_f.count(s[l]) && s_f[s[l]]<t_f[s[l]]){
                        have_letters --;
                    }
                    l++;
            }
        }
        return res_length == INT_MAX ? "" : s.substr(final_result.first,res_length);
    }
};
