#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    unordered_set<int> s;

    for (int i = 0; i<n; i++){
        int x;
        cin >> x;

        for (auto k : s){
            s.insert(k+x);
            cout << "Added set value k + x: " << k+x << "\n";
        }
        // add x to set
        s.insert(x);
        cout << "Added set value x: " << x << "\n";
        cout << "\n";
    }



    int i = 1; //number to check if we can make
    while (true){
        if (s.find(i) == s.end()){
            cout << i;
            break;
        }
        i++;
    }

}
