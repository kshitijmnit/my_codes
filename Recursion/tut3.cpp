// Calculate factorial of number using recursion
// fact(5) = 5 * fact(4)
#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    int prevFactorial = factorial(n-1);
    return n * prevFactorial;
}
int main(){
    cout << factorial(5);
    return 0;
}



