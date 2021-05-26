// Program to evaluate postfix expression
#include <bits/stdc++.h>
using namespace std;
int postfixEvaluation(string str){
    stack<int> st;
    for(int i=0;i<str.length();i++){
        if(str[i] >= '0' and str[i] <= '9')
            st.push(str[i] - '0');
        else{
            int operand2 = st.top(); st.pop();
            int operand1 = st.top(); st.pop();
            switch (str[i])
            {
            case '+':
                st.push(operand1 + operand2);
                break;
            case '-':
                st.push(operand1 - operand2);
                break;
            case '*':
                st.push(operand1 * operand2);
                break;
            case '/':
                st.push(operand1 / operand2);
                break;
            }
        }
    }
    return st.top();
}
int main(){
    string str;
    getline(cin, str);
    int ans = postfixEvaluation(str);
    //46+2/5*7+
    cout << ans;
    return 0;
}