// Find the max element in an Array using Recursion
// [5, 10, 9, 13, 6] = [5, 13] = 13
#include <bits/stdc++.h>
using namespace std;
int maxOfArray(int arr[], int idx, int arrSize){
    if(idx == arrSize-1){
        return arr[idx];
    }

    int ros = maxOfArray(arr, idx+1, arrSize);
    if(arr[idx] > ros)
        return arr[idx];
    else    
        return ros;
}




int main(){
    int arr[] = {5, 10, 9, 13, 6};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    cout << maxOfArray(arr, 0, arrSize);
    return 0;
}