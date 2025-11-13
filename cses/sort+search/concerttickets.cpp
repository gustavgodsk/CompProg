#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define all(x) begin(x),end(x)
#define sz(x) (int)(x).size()

int main(){
    ll n, m;
    cin >> n >> m;

    multiset<ll> tickets;
    vector<ll> maxPrices(m);

    for (int i = 0; i<n;i++){
        ll temp;
        cin >> temp;
        tickets.insert(temp);
    }

    for (int i=0;i<m;i++){
        cin >> maxPrices[i];
    }

    ll i = 0;
    while (!tickets.empty() && i < int(maxPrices.size())){
        ll maxPrice = maxPrices[i];

        auto iter = tickets.upper_bound(maxPrice);
        if (iter != tickets.begin()){
            cout << *prev(iter) << "\n";
            tickets.erase(prev(iter));
        }
        else {
            cout << -1 << "\n";
        }
        i++;
    }

    for (; i < int(maxPrices.size());i++){
        cout << -1 << "\n";
    }
}
