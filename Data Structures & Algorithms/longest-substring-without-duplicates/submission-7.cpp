class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0) return 0;
        else if(s.size()==1) return 1;
        int longest = 0;
        int range;
        unordered_set<char> substring;
        substring.insert(s[0]);
        int l=0;
        
        for(int r=1;r<s.size();r++){
           if(substring.count(s[r])>0){
            range = substring.size();
            longest = max(longest, range);
            while(substring.count(s[r])>0){
                substring.erase(s[l]);
                l++;
            }
           }
           substring.insert(s[r]);

        }
        range = substring.size();
        longest = max(range , longest);
        return longest;
    }
};
