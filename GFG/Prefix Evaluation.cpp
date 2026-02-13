#include <stack>
#include <cmath>
using namespace std;

int evaluatePrefix(string s) {
    stack<int> st;

    for (int i = s.length() - 1; i >= 0; i--) {
        if (isdigit(s[i])) {
            st.push(s[i] - '0');
        } 
        else {
            int op1 = st.top(); st.pop();
            int op2 = st.top(); st.pop();

            switch (s[i]) {
                case '+': st.push(op1 + op2); break;
                case '-': st.push(op1 - op2); break;
                case '*': st.push(op1 * op2); break;
                case '/': st.push(op1 / op2); break;
            }
        }
    }

    return st.top();
}
