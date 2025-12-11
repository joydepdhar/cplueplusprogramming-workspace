#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"Enter the Array Size:";
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long mx=arr[0];
      for (int i = 1; i < n; i++) {
        mx = max(mx, arr[i]);
    }
    cout<<mx;
    return 0;
}