#include <iostream>
#include <vector>

using namespace std;

int main(){
    string str[5];
    vector<int> intvec;
    for(int i=0; i<5; i++){
        cin >> str[i];
        if(str[i].find("FBI")!=string::npos) intvec.push_back(i);
    }
    if(intvec.size()==0) cout << "HE GOT AWAY!";
    else 
        for(int i=0; i<intvec.size(); i++)
            cout << intvec.at(i)+1<<" ";
  
}