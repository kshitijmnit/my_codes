// Check whether the array is sorted or not using recursion
// 1 3 5 7 9
#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n){
    if(n == 1){
        return true;
    }

    return (arr[0] < arr[1]) and isSorted(arr+1,n-1);
}

int main(){
    int arr[]={1,3,5,9,7};
    cout << isSorted(arr, 5);
    return 0;
}