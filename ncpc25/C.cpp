#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> days;
    map<string,int> m{{"Mon",1},{"Tue",2},{"Wed",3},{"Thu",4},{"Fri",5},{"Sat",6},{"Sun",7}};
    for (int i = 0; i<2;i++){
        string day,time; 
        cin >> day >> time;

        int dayTime = m[day] * 60 * 24;
        
        int hours = stoi(time.substr(0,2)) * 60;

        int minutes = stoi(time.substr(3,2));

        int totalMinutes = dayTime+hours+minutes;


        days.push_back(totalMinutes);
    }
    int diff = 0;
    if (days[1] < days[0]){
        diff = 7 * 60 * 24 + days[1] - days[0];
    } else {
        diff = days[1]-days[0];
    }
    
    int dayDiff = diff / (60*24);
    int hourDiff = (diff%(60*24)) / 60;
    int minuteDiff = ((diff%(60*24)%60));


    string dayS = to_string(dayDiff) + ((dayDiff > 1) ? " days" : " day");
    string hourS = to_string(hourDiff) + ((hourDiff > 1) ? " hours" : " hour");
    string minuteS = to_string(minuteDiff) + ((minuteDiff > 1) ? " minutes" : " minute");

    vector<string> v;
    if (dayDiff > 0) {v.push_back(dayS);}
    if (hourDiff > 0) {v.push_back(hourS);}
    if (minuteDiff > 0) {v.push_back(minuteS);}
           
    string out;
    if (v.size() == 0){
        out = "7 days";
    }else if (v.size() == 1){
        out =v[0];
    } else if (v.size() == 2){
        out =v[0];
        out+= " and ";
        out += v[1];
    } else{
        out = v[0] + ", " + v[1] + ", " + v[2];
    }

    cout << out;
}
