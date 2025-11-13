#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n;
    cin >> n;

    ll currentMax = 0;
    ll globalMax = 0;
    for (int i = 0; i < n; i++){
        ll x;
        cin >> x;

        if (i == 0){
            currentMax = x;
            globalMax = x;
            continue;
        }
        
        currentMax = max(currentMax + x, x);
        globalMax = max({currentMax, globalMax});
        //cout << currentMax << "\n";

    }

    cout << globalMax;
}
