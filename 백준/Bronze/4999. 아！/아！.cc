#include <iostream>

using namespace std;

int main(){
    string me, doctor;
    cin >> me >> doctor;
    if(me.length() >= doctor.length()) cout << "go";
    else cout << "no";
}