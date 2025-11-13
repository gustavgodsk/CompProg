#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(ll x, ll y){
    ll dir = 1; //1 if ascending, -1 if desc
    ll res;
    if (x < y){
        
        if (y%2==0){
            dir = -1;
            res = y*y; 
        }
        else {
            dir = 1;
            res = (y-1)*(y-1)+1;
        }
        res += (x-1)*dir;
    }
    else {
        if (x%2==1){
            dir = -1;
            res = x*x;
        }
        else {
            dir = 1;
            res = (x-1)*(x-1)+1;
        }
        res += (y-1)*dir;
    }
    cout << res << "\n";
}

int main(){
    ll n;
    cin >> n;
    vector<pair<ll,ll>> v;
    for (int i = 0; i < n; i++){
        ll x, y;
        cin >> y >> x;
        pair<ll,ll> p = {x,y};
        v.push_back(p);
    }
    for (int i = 0; i < n; i++){
        solve(v[i].first, v[i].second);
    }
}

