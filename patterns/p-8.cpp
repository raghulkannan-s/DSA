#include <iostream>
using namespace std;

int main() {

    int times;
    cin>>times;

    for (int i = 0; i<times; i++){

        for(int j = 0; j<i; j++){
            cout << " ";
        }

        for(int j = 0; j<2*times-(2*i+1) ; j++){
            cout << "*";
        }

        for(int j = 0; j<i; j++){
            cout << " ";
        }

        cout<< endl;
    }
}