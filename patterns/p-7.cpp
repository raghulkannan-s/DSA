#include <iostream>
using namespace std;

int main() {

    int times;
    cin>>times;


    for (int i = 0; i<times; i++){


        for(int j = 0; j<times-i-1; j++){
            cout << " ";
        }

        for(int j = 0; j<2*i+1 ; j++){
            cout << "*";
        }

        for(int j = 0; j<times-i-1; j++){
            cout << " ";
        }

        cout<< endl;
    }

}