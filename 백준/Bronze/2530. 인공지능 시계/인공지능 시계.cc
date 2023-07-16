#include <iostream>

using namespace std;

int main(){
    int hour, min, sec,time;
    cin >> hour >> min >> sec >>time;
    int temphour, tempmin, tempsec;
    tempsec = time%60;
    tempmin = time/60;
    temphour = tempmin/60;
    tempmin = tempmin%60;

    sec+=tempsec;
    min+=tempmin;
    hour+=temphour;

    while(sec<0 || sec>59){
        if(sec>59){
            min++;
            sec-=60;
        }
    }

    while(min>59 || min<0){
        if(min>59){
            hour++;
            min-=60;
        }
    }

    while(hour<0 || hour>23){
        if(hour>23)
            hour-=24;
    }

    cout << hour << " " << min << " " << sec;
}