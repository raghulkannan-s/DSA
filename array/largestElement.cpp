#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    int target = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i] >= target){
            target = arr[i];
        }
    }

    cout<<target;

    return 0;
}
