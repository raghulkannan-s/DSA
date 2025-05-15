#include <bits/stdc++.h>
using namespace std;

void reverser(int i, int arr[], int n){
    if(i == n/2) return;
    swap(arr[i], arr[n-i-1]);
    reverser(i+1, arr, n);
    return;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i <n; i++) cin>>arr[i];
    reverser(0,arr,n);
    for(int i = 0; i <n; i++) cout<<arr[i]<<" ";
    return 0;
}
