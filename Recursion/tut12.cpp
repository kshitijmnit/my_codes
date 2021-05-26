// Remove duplicates from the String using Recursion
// aaaabbbeeecdddd -> abecd
#include <bits/stdc++.h>
using namespace std;
string removeDuplicate(string s){
    if(s.length() == 0){
        return "";
    }

    string ros = s.substr(1);
    if(s[0] == ros[0]){
        return removeDuplicate(s.substr(1));
    }
    else{
        return s[0] + removeDuplicate(s.substr(1));
    }
}
int main(){
    cout << removeDuplicate("aaaabbbeeecdddd");
    return 0;
}