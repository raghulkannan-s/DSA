#include <iostream>
using namespace std;

int main() {

    int times;
    cin>>times;

    int a = times;
    for (int i=0; i<times; i++ ){
        int ele = 1;
        for (int j = 1; j <= a; j++){
            cout<<ele;
            ele++;
        }
        cout<<endl;
        a--;
    };

}