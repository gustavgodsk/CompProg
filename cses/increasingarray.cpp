#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, a;
    cin >> n >> a;
    long long moves = 0;
    vector<long long> v;
    v.push_back(a);
    for (long long i = 1;i < n; i++){
        long long temp;
        cin >> temp;
        v.push_back(temp);
        if (v[i-1] > temp){
            long long diff = v[i-1] - temp;
            moves += diff;
            v[i] = temp + diff;
        }
    }

    cout << moves << "\n";
}
