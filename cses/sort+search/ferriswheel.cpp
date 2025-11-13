#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, x;
    cin >> n >> x;

    multiset<ll> children;
    for (ll i = 0; i < n; i++){
        ll temp;
        cin >> temp;
        children.insert(temp);
    }

    ll count = 0;
    while (!children.empty()){
        
        //end() peger på elementet efter sidste element, derfor brug prev
        ll weight = *prev(children.end()); //værdi af sidste element
       
        children.erase(prev(children.end())); //slet sidste element .. 
        
        //hvor meget plads er tilbage?
        ll spaceLeft = x - weight;
        
        //slet den størst mulige kandidat hvis findes 
        //upper_bound = første element der er strengt større (>)
        //lower_bound = første element der er svagt større (>=) - kan være lig med værdien
        auto iter = children.upper_bound(spaceLeft);
        if (iter != children.begin()){
            children.erase(prev(iter));
        }

        count++;

    }

    cout << count;
}
