// Move all x to the end of String using Recursion
// axxbdxcefxhix -> abdcefhixxxxx
#include <bits/stdc++.h>
using namespace std;
string moveAllX(string s){
    if(s.length() == 0){
        return "";
    }

    if(s[0] == 'x'){
        return moveAllX(s.substr(1)) + 'x';
    }
    else{
        return s[0] + moveAllX(s.substr(1));
    }
}
int main(){
    cout << moveAllX("axxbdxcefxhix");
    return 0;
}