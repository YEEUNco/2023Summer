#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    for(int i=0; i<num; i++){
        for(int k=0; k<num-i-1; k++)
            cout << " ";
        for(int k=0; k<1+2*i; k++)
            cout << "*";
        cout << "\n";
    }
}