#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n,m,k;
    cin >> n >> m >> k;

    vector<ll> applicants;
    vector<ll> apartments;
    applicants.reserve(n);
    apartments.reserve(m);

    for (ll i = 0; i < n; i++){
        ll applicant;
        cin >> applicant;
        applicants.push_back(applicant);
    }

    for (ll i = 0; i < m; i++){
        ll apartment;
        cin >> apartment;
        apartments.push_back(apartment);
    }

    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());

    ll count = 0;
    ll i = 0;
    for (ll apartment : apartments){
        while (i < n){
            ll applicant = applicants[i];
            if (applicant + k < apartment){
                i++;
            }
            else if (applicant - k > apartment){
                break;
            }
            else {
                count++;
                i++;
                break;
            }
        }
    }
    cout << count;
}
