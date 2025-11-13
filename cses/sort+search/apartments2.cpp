#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n,m,k;
    cin >> n >> m >> k;

    vector<ll> applicants(n);
    vector<ll> apartments(m);

    for (ll i = 0; i < n; i++){
        cin >> applicants[i];
    }

    for (ll i = 0; i < m; i++){
        cin >> apartments[i];
    }

    sort(applicants.begin(),applicants.end());
    sort(apartments.begin(),apartments.end());

    ll i = 0; //applicants
    ll j = 0; //apartments
    ll count = 0;
    
    while (i < n && j < m){
        ll applicant = applicants[i];
        ll apartment = apartments[j];

        if (applicant + k < apartment){
            i++;
        }
        else if (applicant - k > apartment){
            j++;
        }
        else {
            count++;
            i++;
            j++;
        }
    }
    cout << count;
}
