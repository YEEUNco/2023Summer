#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    for(int i=0; i<num; i++){
        for(int k=0; k<num-1-i; k++) cout << " ";
        for(int k=0; k<i+1; k++) {
            if(k==0) cout << "*";
            else cout << " *";
        }
        cout << "\n";
    }
}