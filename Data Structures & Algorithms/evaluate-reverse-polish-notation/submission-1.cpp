class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stck;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                int b=stck.top();
                stck.pop();
                int a=stck.top();
                stck.pop();
                int res = 0;
                if(tokens[i]=="+"){
                    res = a+b;
                }
                else if(tokens[i]=="-"){
                    res = a-b;
                }
                else if(tokens[i]=="*"){
                    res = a*b;
                }
                else if(tokens[i]=="/"){
                    res = a/b;
                }
                stck.push(res);
            }
            else{
                stck.push(stoi(tokens[i]));
            }
        }
        return stck.top();
    }
};