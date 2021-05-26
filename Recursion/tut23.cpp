// Given a positive integer n, break it into the sum of at least two positive integers
// and maximize the product of those integers. Return the maximum product you can get.
// 10 -> 36 -> 3 * 3 * 4, 2 = 1*1, 3 = 2*1;
// ???? Doubt
#include <bits/stdc++.h>
using namespace std;
int maxi = INT_MIN;
int maxProduct(int n){
    if(n==2 or n==3)
        return n-1;

    for(int i=1; i<n; i++){
        int max1 = i * (n-i);
        int max2 = i * maxProduct(n-i);
        int cmax = max(max1, max2);
        maxi = max(cmax, maxi);
        return maxi;
    }
}

int main(){
    cout << maxProduct(10);
    return 0;
}