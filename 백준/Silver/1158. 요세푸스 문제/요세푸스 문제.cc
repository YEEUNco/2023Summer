#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> v,result;
    for(int i=0; i<N; i++){
        v.push_back(i+1);
    }
    int i=--K;
    while(!v.empty()){
        result.push_back(v.at(i));
        v.erase(v.begin() + i);
        i+=K;
        while(i>=v.size() && !v.empty()){
             i=i-v.size();
        }
    }
    cout << "<";
    for(int a : result){
        cout << a ;
        if(result.back()!=a) cout << ", ";
    }
    cout << ">";
}