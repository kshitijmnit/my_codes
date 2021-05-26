// Count the number of paths in maze of n*n using Recursion
// Allowed moves:- (x, y) -> (x+1, y) or (x, y) -> (x, y+1)
// Start point is (0, 0) and End point is (n-1, n-1)
#include <bits/stdc++.h>
using namespace std;
int countPathMaze(int n, int i, int j){
    if(i == n-1 and j == n-1){
        return 1;
    }
    if(i >=n or j >=n){
        return 0;
    }
 
    return countPathMaze(n, i+1, j) + countPathMaze(n, i, j+1);
}
int main(){
    cout << countPathMaze(3,0,0);
    return 0;
}