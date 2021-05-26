// Calculate the value of pow(n, p) using recursion
// pow(2, 5) = 2 * pow(2,4) 
#include <bits/stdc++.h>
using namespace std;
int power(int n, int p){
    if(p==0){
        return 1;
    }
    int prevPower = power(n, p-1);
    return n * prevPower;
}
int main(){
    cout << power(2,5);
    return 0;
}