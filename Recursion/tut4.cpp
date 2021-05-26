// Print the nth Fibonacci Number using recursion
// 0 1 1 2 3 5 8 13 21................
#include <bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n == 0 or n == 1){
        return n;
    }

    return fib(n-1) + fib(n-2);
}
int main(){
    cout << fib(6);
    return 0;
}