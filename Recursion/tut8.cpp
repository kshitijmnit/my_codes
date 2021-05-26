// Find first occurence of number in Array using Recursion
// 4 2 1 2 5 2 7
#include <bits/stdc++.h>
using namespace std;
int firstOccurence(int arr[], int n, int i, int key){
    if(i == n){
        return -1;
    }

    if(arr[i] == key){
        return i;
    }

    return firstOccurence(arr, n, i+1, key);
}
int main(){
    int arr[]={4,2,1,2,5,2,7};
    cout << firstOccurence(arr,7,0,5);
    return 0;
}
