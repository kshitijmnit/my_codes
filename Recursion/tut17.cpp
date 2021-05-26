// Count the number of paths possible from 
// Start point to end point in gameboard 
#include <bits/stdc++.h>
using namespace std;
int countPaths(int start, int end){
    if(start == end){
        return 1;
    }
    if(start > end){
        return 0;
    }
    int count=0;
    for(int i=1;i<=6;i++){
        count += countPaths(start+i, end);
    }
    return count;
}
int main(){
    cout << countPaths(0,3);
    return 0;
}