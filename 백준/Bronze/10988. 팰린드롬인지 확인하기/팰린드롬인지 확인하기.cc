#include <iostream>

using namespace std;

int main(){
    string str;
    cin >> str;
    bool tf = true;
    for(int i=0; i<str.size()/2; i++){
        if(str.at(i) != str.at(str.size()-1-i)) tf = false;
    }
    if(tf == true) cout << "1";
    else cout << "0";
}