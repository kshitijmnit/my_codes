// Next greater element
// 2  5  9  3  1  12  6  8  7
// 5  9 12 12  12 -1  8 -1 -1
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    stack<int> st;
    vector<int> v;
    v.push_back(-1);
    st.push(arr[n-1]);

    for(int i=n-2; i>=0; i--){
        while(st.empty() == false and arr[i] >= st.top()){
            st.pop();   
        }
        if(st.empty() == true)
            v.push_back(-1);
        else
            v.push_back(st.top());
        st.push(arr[i]);
    }
    reverse(v.begin(), v.end());
    for(auto it=v.begin(); it != v.end(); it++)
        cout << *it << " ";
    return 0;
}
