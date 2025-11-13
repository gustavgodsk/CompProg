#include <bits/stdc++.h>
using namespace std;


int main(){
    long long n;
    cin >> n;
    string outp;
    for (int i=0;i<n;i++){
        string s = "YES";
        long long a,b;
        cin >> a >> b;
        if (a < b/2+1 || b < a/2+1){
            s = "NO";
        }
        else {
            if ((a % 2 == 0 && b % 2 == 1) || (a % 2 == 0 && b % 2 == 1) || (a%3==0 && b%3==0)) {
            
            }
            else {
                s="NO";
            }
        }
        outp += s + "\n";
    }
    cout << outp;
}
