// Sum of n natural numbers using recursion
// S = 1+2+3---------------N
#include <bits/stdc++.h>
using namespace std;
int Sum(int n){
    if(n==0){
        return 0;
    }
    int prevSum = Sum(n-1);
    return n + prevSum;
}
int main(){
    cout << Sum(5);
    return 0;
}