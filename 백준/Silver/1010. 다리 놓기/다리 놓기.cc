#include <iostream>

using namespace std;

long factorial(int num){
    if(num==0 || num==1) return 1;
    else return factorial(num-1)*num;
}

long factorial(int num, int end){
    if(num==0 || num==1 || num==end) return 1;
    else return factorial(num-1,end)*num;
}


int main(){
    int num;
    cin >> num;
    int num1[num], num2[num];
    long long total[num];

    for(int i=0; i<num; i++){
        cin >> num1[i] >> num2[i];
        int min = num2[i]-num1[i];
        if(min<num1[i]) total[i] = factorial(num2[i],num1[i])/factorial(min);
        else total[i] = factorial(num2[i],min)/factorial(num1[i]);
    }

    for(int i=0; i<num; i++)
        cout << total[i] <<"\n";
}