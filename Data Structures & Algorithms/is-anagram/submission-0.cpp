class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!= t.size()) return false;
        unordered_map<char,int> countS;
        unordered_map<char,int> countT;
        for(int i=0;i<s.size();i++){
            if(countS.count(s[i])==0){
                countS[s[i]] =1;
            }
            else countS[s[i]]+=1;

             if(countT.count(t[i])==0){
                countT[t[i]] =1;
            }
            else countT[t[i]]+=1;
        }
        if(countT==countS){return true;}
        return false;
    }
};
