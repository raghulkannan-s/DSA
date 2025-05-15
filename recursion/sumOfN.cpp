#include <iostream>
using namespace std;

int sumOfN(int n){
    if (n==0) return 0;
    return n+ sumOfN(n-1);
}

int main() {
    int n;
    cin>>n;
    cout<< "Total : " << sumOfN(n);
    return 0;
}



//This is brute forced directly with global variable

// int total = 0;

// void sumOfN(int number, int curr){
//     total = total + curr;
//     if( curr == number){
//         cout<< "Total: " << total;
//         return;
//     }
//     sumOfN(number , curr+1);
//     return;
// }

// int main() {
//     int n;
//     cin>>n;
//     sumOfN(n, 0);
//     return 0;
// }
