#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<int> v(n);
    iota(v.begin(), v.end(), 1);
    while (n-- -1){
        int i;
        cin >> i;
        v.erase(find(v.begin(),v.end(),i));
    }
    cout << v.at(0) << endl;
}
