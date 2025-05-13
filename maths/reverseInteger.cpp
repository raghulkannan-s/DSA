#include <iostream>
using namespace std;

int reverse(int x) {
        int finalValue = 0;
        while(x!=0){
            int temp = x%10;
            if (finalValue > INT_MAX / 10 || (finalValue == INT_MAX / 10 && temp > 7)) return 0;
            if (finalValue < INT_MIN / 10 || (finalValue == INT_MIN / 10 && temp < -8)) return 0;
            x = x/10;
            finalValue = finalValue * 10 + temp;
        }
        return finalValue;
    }


int main(){
    int a;
    cin>>a;
    cout << "Input : " << a <<endl;
    cout << "Reversed : " << reverse(a) <<endl;
    return 0;
}