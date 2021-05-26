// Print the number from N to 1 using Recursion
// 5 4 3 2 1
#include <bits/stdc++.h>
using namespace std;
void printDec(int n){
    if(n == 1){
        cout << 1;
        return;
    }

    cout << n;
    return printDec(n-1);
}
int main(){
    printDec(5);
    return 0;
}