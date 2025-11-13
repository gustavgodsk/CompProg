#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int givenMax = 0;
    vector<int> v;
    for (int i = 0; i < n; i++){
        string L;
        cin >> L;
        int speed;
        if (L == "/"){
            speed = (givenMax/10+1) * 10;
        }
        else {
            speed = stoi(L);
            if (speed > givenMax){givenMax=speed;}
        }
        v.push_back(speed);
    }
    for (int i : v){
        cout << i << "\n";
    }
}
