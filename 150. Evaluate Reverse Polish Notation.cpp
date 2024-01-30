class Solution {
public:
    stack<int> st;
    void op(string& s){
        if(st.empty()) return;
        int n2=st.top();
        st.pop();
        if(st.empty()) return;
        int n1=st.top();
        st.pop();

        int x;
        switch(s[0]){
            case '+':
                x=n1+n2;
                break;
            case '-':
                x=n1-n2;
                break;
            case '*':
                x=n1*n2;
                break;
            case '/':
                x=n1/n2;
                break;
        }
        st.push(x);


    }
    int evalRPN(vector<string>& tokens) {
        for(int i=0;i<tokens.size();i++){
            string &s=tokens[i];
            if(s.size()>1 || isdigit(s[0])){
                int x=stoi(s);
                st.push(x);
            }
            else op(s);
        }
        if(st.empty()) return 0;
        return st.top();
    }
};
