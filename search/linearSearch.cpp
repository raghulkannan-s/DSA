#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int target){
    for (int i = 0; i<n;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[]= {10,15,65,98,54,78,88};
    int target;
    cin >> target;
    int n = sizeof(arr);
    int index = linearSearch(arr, n, target);
    if(index >=0){
        cout<< "Index of target element is : "<< index;
    }
    else{
        cout<< "Index of target element is not found ";
    }
    return 0;
}
