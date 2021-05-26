// Count and print paths in maze of n*m using Recursion
// Allowed moves:- (x, y) -> (x+1, y) or (x, y) -> (x, y+1)
// Start point is (0, 0) and End point is (n-1, m-1)
#include <bits/stdc++.h>
using namespace std;
int totalPath=0;
void PathMaze(int i, int j, int n, int m, string osf){
    if(i == n-1 and j == m-1){
        totalPath += 1;
        cout << osf << " ";
        return;
    }
    if(i >=n or j >=m){
        return;
    }

    PathMaze(i,j+1,n,m,osf + "R");
    PathMaze(i+1,j,n,m,osf + "D");    
}
int main(){
    PathMaze(0,0,3,3, "");
    cout << totalPath;
    return 0;
}