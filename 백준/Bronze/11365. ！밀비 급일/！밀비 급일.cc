#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<string> strvec;
    string str;
    getline(cin, str);
    while(str!="END"){
        reverse(str.begin(), str.end());
        strvec.push_back(str);
        getline(cin, str);
    }
    for(string s : strvec)
        cout << s <<"\n";

}