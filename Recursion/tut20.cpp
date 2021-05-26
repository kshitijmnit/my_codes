// Friends Pairing Problem, Given n friends, each one can remain single 
// or can be paired up with some other friend. Each friend can be paired only once. 
// Find out the total number of ways in which friends can remain single or can be paired up.
// n = 3 output is 4 {1,2,3}->{{1}{2}{3}, {1}{23}, {12}{3}, {13}{2}}
#include <bits/stdc++.h>
using namespace std;
int friendsPairing(int n){
    if(n == 0 or n == 1 or n == 2){
        return n;
    }

    return friendsPairing(n-1) + (n-1) * friendsPairing(n-2);
}
int main(){
    cout << friendsPairing(3);
    return 0;

}
