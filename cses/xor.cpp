#include <bits/stdc++.h>
using namespace std;

int p2(int x, int y){
    if (x+y >= 2) { return 0; }
    else if (x+y < 2) { return 1; }
    return 0;
}

int p3(int x, int y){
    if (x+y <= 0) { return 0; }
    else if (x+y > 0) { return 1; }
    return 0;
}

int p1(int x,int y){
    if (x+y >= 2){ return p2(x,y); }
    else if (x+y < 2){ return p3(x,y); }
    return 0;
}
int main(){
    int x, y;
    cin >> x >> y;
    int res = p1(x,y);
    cout << res;
}

