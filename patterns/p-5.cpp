#include <iostream>
using namespace std;

int main() {

    int times;
    cin>>times;

    int a = times;
    for (int i=0; i<times; i++ ){
        for (int j = 1; j <= a; j++){
            cout<<"*";
        }
        cout<<endl;
        a--;
    };

}