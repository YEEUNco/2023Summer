#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    for(int i=0; i<num-1; i++){
        for(int k=0; k<i+1; k++)
            cout << "*";
        for(int k=0; k<2*num-2-2*i; k++)
            cout << " ";
        for(int k=0; k<i+1; k++)
            cout << "*";
        cout << "\n";
            
    }
    for(int i=0; i<2*num; i++)
        cout << "*";
    cout << "\n";
    for(int i=0; i<num-1; i++){
        for(int k=0; k<num-1-i; k++)
            cout << "*";
        for(int k=0; k<2+i*2; k++)
            cout << " ";
        for(int k=0; k<num-1-i; k++)
            cout << "*";
        cout << "\n";
    }
}