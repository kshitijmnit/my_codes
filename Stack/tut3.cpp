// Balanced brackets
// [(a+b) + {(c+d)*(e/f)}] -> true (a+b)] -> false
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    stack <char> st;

    for(char ch : str){
        if(ch == '(' or ch == '{' or ch == '['){
            st.push(ch);
        }
        else if(ch == ')'){
            if(st.empty() == false and st.top() == '(')
                st.pop();
            else{
                cout << "Not Balanced";
                return 0;
            }
        }
        else if(ch == '}'){
            if(st.empty() == false and st.top() == '{')
                st.pop();
            else{
                cout << "Not Balanced";
                return 0;
            }
        }
        else if(ch == ']'){
            if(st.empty() == false and st.top() == '[')
                st.pop();
            else{
                cout << "Not Balanced";
                return 0;
            }
        }
    }
    if(st.empty() == true)
        cout << "Balanced";
    else    
        cout << "Not balanced";
    return 0;
}