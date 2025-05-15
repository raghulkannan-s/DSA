#include <iostream>
using namespace std;

void printDescending(int number){
    if( number == 0){
        return ;
    }
    cout << number << endl;
    printDescending(number-1);
}

int main() {
    int n;
    cin>>n;
    printDescending(n);
    return 0;
}
