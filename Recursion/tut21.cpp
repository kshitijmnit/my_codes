// Staircase Problem, Given n stairs, you can either climb 1 or 2 stairs
// at a time. Find total ways in which you can climb the stairs
#include <bits/stdc++.h>
using namespace std;
int count_ways(int n){
    if(n == 0 or n == 1){
        return 1;
    }
    
    return count_ways(n-1) + count_ways(n-2);
}
int main(){
    cout << count_ways(4);
    return 0;
}