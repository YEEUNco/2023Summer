#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    int casenum[num];
    string casename[num];

    
    for(int i=0; i<num; i++){
        cin >> casenum[i];
        string name[casenum[i]];
        int onecasenum[casenum[i]];
        int max = 0;
        for(int k=0; k<casenum[i]; k++){
            cin >> name[k] >> onecasenum[k];
            
            if(max < onecasenum[k]) {
                max = onecasenum[k];
                casename[i] = name[k];
            }
        }
    }
    
    for(int i=0; i<num; i++){
        cout << casename[i]<<"\n";
    }
   
}

