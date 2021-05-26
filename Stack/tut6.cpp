// Program to evaluate the prefix expression
#include <bits/stdc++.h>
using namespace std;
int prefixEvaluation(string str){
    stack<int> st;
    for(int i=str.length()-1; i>=0; i--){
        if(str[i] >= '0' and str[i] <= '9')
            st.push(str[i] - '0');
        else{
            int operand1 = st.top(); st.pop();
            int operand2 = st.top(); st.pop();
            switch(str[i]){
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
    int ans =prefixEvaluation(str);
    cout << ans << endl;
    return 0;
}