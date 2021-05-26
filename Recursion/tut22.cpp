// Print the following pattern n=4 using Recursion
// * * * *
// * * *
// * * 
// *
#include <bits/stdc++.h>
using namespace std;

void printPattern(int n){
    if(n == 0){
        return;
    }

    for(int i=1;i<=n; i++){
     
        cout << "*" << " "; 
    }
    cout << endl;
    printPattern(n-1);
}

int main(){
    printPattern(4);
    return 0;
}