// Print the number from 1 to N using Recursion
// 1 2 3 4 5
#include <bits/stdc++.h>
using namespace std;
void printInc(int n){
    if(n == 1){
        cout << 1;
        return;
    }

    printInc(n-1);
    cout << n;
}
int main(){
    printInc(5);
    return 0;
}
