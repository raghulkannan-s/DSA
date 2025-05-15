#include <bits/stdc++.h>
using namespace std;

void reverser(int i, string arr[], int n){
    if(i == n/2) return;
    swap(arr[i], arr[n-i-1]);
    reverser(i+1, arr, n);
    return;
}

int main() {
    int n;
    cin >> n;
    string arr[n];

    for(int i = 0; i < n; i++) cin >> arr[i];
    reverser(0, arr, n);

    bool isPalindrome = true;

    for(int i = 0; i < n; i++) {
        if(arr[i] != arr[n-i-1]) {
            isPalindrome = false;
            break;
        }
    }

    cout << (isPalindrome ? "true" : "false");
    return 0;
}
