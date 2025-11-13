#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long sum;
    long long desiredSum = n*(n+1)/2;
    while (n-- -1){
        int i;
        cin >> i;
        sum += i;
    }
    cout << desiredSum - sum << endl;
}
