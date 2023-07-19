#include <iostream>
#include <vector>

using namespace std;

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    vector<int> yak;
    for(int i=0; i<num1; i++){
        if(num1%(i+1)==0) yak.push_back(i+1);
    }

    if(yak.size()<num2) cout << 0;
    else cout << yak.at(num2-1);
}