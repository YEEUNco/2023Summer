#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        if(i%2==1) cout << " ";
        for(int i=0; i<N-1; i++) cout << "* ";
        cout <<"*\n";
    }
}