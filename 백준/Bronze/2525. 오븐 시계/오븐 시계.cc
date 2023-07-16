#include <iostream>

using namespace std;

int main(){
    int hour, min, time;
    cin >> hour >> min >> time;
    
    int thour = time/60;
    
    int tmin;

    if(thour>0){
        tmin = time%60;
    } 
    else 
        tmin = time;

    hour+=thour;

    if(min+tmin>59){
        hour++;
        min=min+tmin-60;
    }
    else min+=tmin;

     if(hour>23)
            hour-=24;

    cout << hour<<" " << min;
    
}