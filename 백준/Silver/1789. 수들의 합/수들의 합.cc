#include <iostream>

using namespace std;

int main(){
    long num, i=0;
    cin >> num;
    while(num>=0){
        i++;
        num-=i;
    }
    cout << i-1;
}