#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;
    ll prev = n-1;
    if (n <= 3 && n!=1) {cout << "NO SOLUTION"; return 0;}
    if (n == 1) {cout << 1; return 0;}
    for (ll i = 0; i < n; i++){
        cout << prev << " "; 
        if (prev <= 2){
            prev = n;
        }
        else {
            prev -= 2;
        }
    }
}
