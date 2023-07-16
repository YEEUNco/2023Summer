#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    string arr[num];
    for(int i=0; i<num; i++){
        cin >>arr[i];
    }
    char newstr[arr[0].length()];
    bool tf = true;
    for(int i=0; i<arr[0].size(); i++){
        for(int k=0; k<num; k++){
            if(arr[0].at(i)==arr[k].at(i)) tf = true;
            else{ 
                tf=false;
                break;
            }
        }
        if(tf==true) newstr[i]=arr[0].at(i);
        else newstr[i]='?';
    }
    for(int i=0; i<arr[0].length(); i++){
        cout << newstr[i];
    }
}