class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if( s1.size()> s2.size()) return false;
        int length = s1.size();
        vector<int> f(26,0);
        vector<int> s(26,0);
        for( int i = 0;i<s1.size(); i++){
            f[s1[i] - 'a']++;
            s[s2[i] - 'a']++;
        }
        int l = 0;
        int r = length - 1;
        while(r<s2.size()){
            if(f == s) return true;
            r++;
            if(r==s2.size())break;
            s[s2[r] - 'a']++;
            s[s2[l] - 'a']--;
            l++;

        }
        return false;

    }
};
