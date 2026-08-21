class Solution {
public:
    bool isValid(string s) {
        // My solution
        if(s.empty()) return false;
        if(s[0]==']'|| s[0]=='}'|| s[0]==')') return false;
        vector<int> signs;
        for(int i=0;i<s.size();i++){
            if(s[i]=='{' || s[i]=='[' || s[i]=='('){
                signs.push_back(s[i]);
            }
            else if(s[i]==')'){
                if(signs.empty() || signs[signs.size()-1] !='(') return false;
                signs.pop_back();
            }
            else if(s[i]==']'){
                if(signs.empty() || signs[signs.size()-1] !='[') return false;
                signs.pop_back();
            }
            else if(s[i]=='}'){
                if(signs.empty() || signs[signs.size()-1] !='{') return false;
                signs.pop_back();
            }
        }
        if(signs.size()!=0)return false;
        return true;
          
    }
};
