#include <bits/stdc++.h>
using namespace std;

bool compareValues(pair<int,int> x, pair<int,int> y){
    return x.first < y.first;
}

int main(){
    int n,x;
    cin >> n >> x;

    vector<pair<int,int>> values;
    values.reserve(n);
    for (int i = 0; i < n; i++){
        int v;
        cin >> v;
        values.emplace_back(v, i+1);
    }

    sort(values.begin(), values.end());

    bool solutionFound = false;
    pair<int, int> res;
    const size_t sz = values.size();
    for (int i = 0; i < sz; i++){
        auto curr = values[i];
        int currentVal = values[i].first;
        int desiredValue = x - currentVal;
        auto it = lower_bound(
                values.begin(),
                values.end(),
                make_pair(desiredValue,0),
                compareValues);

        if (it == values.end()){
            continue;
        }
        int foundVal = it->first;
        if (foundVal == desiredValue){
            //case 1: theyre equal (prevent same element from being chosen twice)
            if (it->second == curr.second){
                //go to next element
                int nextVal = next(it)->first;
                if (nextVal == desiredValue){
                    res = make_pair(values[i].second, next(it)->second);
                    solutionFound = true;
                }
            }
            else {
                res = make_pair(values[i].second, it->second);
                solutionFound = true;
            }
        }
    }

    if (!solutionFound){
        cout << "IMPOSSIBLE";
    }
    else {
        cout << res.first << " " << res.second;
    }
}
