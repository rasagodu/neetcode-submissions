class Solution {
public:
    int characterReplacement(string s, int k) {
        if(s.size()==0) return 0;
        int maxLength = 0;
        unordered_map<char,int> mp;
        int maxFreq = 0;
        int length = 0;
        int l=0;
        for(int r = 0; r < s.size();r++){
            mp[s[r]]++;
            maxFreq = max(maxFreq , mp[s[r]]);
            length = r - l + 1;
                      
            if( length - maxFreq > k){
                mp[s[l]]--;
                l++;
            }
            length = r - l + 1;
            maxLength = max(maxLength , length);
            
            
            
        }
        return maxLength;
    }
};
