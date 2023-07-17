#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
  
    int result1[num], result2[num];
    for(int i=0; i<num; i++){
        int num1,num2;
        cin >> num1 >> num2;
       
        if(num1<num2){
            
            for(int k=num1; k>0; k--){
                if(num1%k==0 && num2%k==0) {
                    result1[i] = k;
                    break;
                }
                
            }
            for(int k=num2; k<=1000*1000; k++){
                if(k%num2==0 && k%num1==0) {
                    result2[i] = k;
                    break;
                }
                
            }
        }
        else {
            
            for(int k=num2; k>0; k--){
                if(num1%k==0 && num2%k==0) {
                    result1[i] = k;
                    break;
                }
                
            }
            for(int k=num1; k<=1000*1000; k++){
                if(k%num2==0 && k%num1==0) {
                    result2[i] = k;
                    break;
                }
                
            }
        }
    }

    for(int i=0; i<num; i++){
        cout << result2[i] << " " << result1[i] << "\n";
    }
}