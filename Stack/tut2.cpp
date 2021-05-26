// Duplicate Brackets problem
// Given a string which is balanced. But some of them are needless
// ((a+b) + (c+d))--> false (a+b) + ((c+d))--> true
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    stack <char> st;
    
    for(char ch : str){
        if(ch == ')'){
            if(st.top() == '('){
                cout << "true" << endl;
                return 0;
            }
            while(st.top() != '('){
                st.pop();           
            }
            st.pop();  
        }
        
        else{
            st.push(ch);
        }
    }
    cout << "false";
    return 0;
}