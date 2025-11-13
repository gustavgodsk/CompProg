#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<set<int>> groups;
   
    for (int i = 0;i<m;i++){
        int from,to;
        cin >> from >> to;

        bool isFound = false;
        for (auto &group : groups){
            if (group.count(from) || group.count(to)){
                group.insert(to);
                group.insert(from);
                isFound = true;
            }
        }
        if (!isFound){
            set<int> temp{from,to};
            groups.push_back(temp);
        }
    }

    vector<int> out(n);
    for (auto group : groups){
        if (group.size() < k){
            cout << "impossible" << "\n";
            return 0;
        }
        
        int count = 0;
        for (auto child : group){
            out[child-1] = (count++) % k + 1;
        }

    }
    
    for (auto s : out){
        cout << s << " ";
    }
}
