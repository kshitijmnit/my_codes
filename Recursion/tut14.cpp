// Generate all possible subsequence of String
// ABC -> "" "A" "B" "AB" "C" "AC" "BC" "ABC"
#include <bits/stdc++.h>
using namespace std;
void subseq(string s, string ans){
    if(s.length() == 0){
        cout << ans << endl;
        return;
    }

    char ch=s[0];
    string ros = s.substr(1);
    subseq(ros, ans);
    subseq(ros, ans+ch);
}

int main(){
    subseq("ABC", "");
    return 0;
}


