#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    for(int i=0; i<num; i++){
        for(int k=0; k<i; k++)
            cout << " ";
        for(int k=0; k<2*num-1-2*i; k++)
            cout << "*";
        cout << "\n";
    }
    for(int i=0; i<num-1; i++){
        for(int k=0; k<num-2-i; k++)
            cout << " ";
        for(int k=0; k<1+2*(1+i); k++)
            cout << "*";
        cout << "\n";
    }
}