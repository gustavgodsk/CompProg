#include <bits/stdc++.h>
using namespace std;

bool compareTimes(pair<int,string> x, pair<int,string> y){
    return (x.first < y.first);
}

int main(){
    int n;
    cin >> n;

    vector<pair<int, string>> times;
    times.reserve(2*n);
    for (int i = 0;i<n;i++){
        int a,b;
        cin >> a >> b;
        times.push_back(make_pair(a,"arrival"));
        times.push_back(make_pair(b,"departure"));
    }
    sort(times.begin(),times.end(),compareTimes);

    int count = 0;
    int maxCount = 0;
    for (auto t : times){
        if (t.second == "arrival"){
            count++;
        }
        else {
            count--;
        }

        maxCount = max(count, maxCount);
    }
    cout << maxCount;
}
