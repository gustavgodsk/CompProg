#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, m;
    cin >> n;
    m = n;
    vector<int> v;
    while (m-- -1){
        int i;
        cin >> i;
        v.push_back(i);
    }
    while (n-- -1){
        if (count(v.begin(),v.end(), n) < 1){
            cout << n;
        }
    }
}
