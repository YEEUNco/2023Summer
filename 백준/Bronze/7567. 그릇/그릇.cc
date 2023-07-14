#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string str;
    cin >> str;
    char arrstr[str.size()+1];
    strcpy(arrstr,str.c_str());
    int total=10;
    for(int i=1; i<str.size(); i++){
        if(arrstr[i]==arrstr[i-1]) total+=5;
        else total +=10;
    }
    cout << total;
}