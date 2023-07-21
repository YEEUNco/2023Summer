#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    int personNum[num];
    for(int i=0; i<num; i++)
        cin >> personNum[i];
    int chong, bu;
    cin >> chong >> bu;
    long long allManager=0;

    for(int i=0; i<num; i++){
        allManager++;
        personNum[i]-=chong;
        if(personNum[i]>0){
            if(personNum[i]%bu==0) allManager += personNum[i]/bu;
            else allManager += (personNum[i]/bu+1);
        }
        
    }

    cout << allManager;

}