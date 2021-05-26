// Print the string in the reverse order using Recursion
// binod -> dobib
#include <bits/stdc++.h>
using namespace std;
void reverse(string s){
    if(s.length() == 0){
        return;
    }

    reverse(s.substr(1));
    cout << s[0];
}
int main(){
    reverse("binod");
    return 0;
}
