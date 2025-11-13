#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll facto(ll n){
    if (n == 0){
        return 1;
    }
    return n * facto(n-1);
}

int main(){
    ll n;
    cin >> n;
    cout << n << " \n";

    ll r;
    r = facto(n);

    cout << r << " \n";

    string rS = to_string(r);
    ll len = rS.size();
    cout << len;
    vector<int> v(rS.begin(), rS.end());
    ll count = 0;
    while(true){
        len--;
        int c = v[len];
        cout << c << "\n";
        cout << c << "\n";
        cout << c << "\n";
        if (c == 0){
            cout << "TRUE" << c;
            count++;
        } else {
            break;
        }

    }
    cout << count;

}
