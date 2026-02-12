class Solution {
public:
    bool isValid(string s) {
        stack<char> ss;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='{' || s[i]=='[' || s[i]=='('){
                ss.push(s[i]);
            }
            else if(ss.empty()){
                return false;
            }
            else{
                if(s[i]=='}'&& ss.top()!='{') return false;
                if(s[i]==']'&& ss.top()!='[') return false;
                if(s[i]==')'&& ss.top()!='(') return false;
                ss.pop();
            }
        }
        if(ss.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};
