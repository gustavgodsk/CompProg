#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<set<int>> v(n);
   
    for (int i = 0;i<m;i++){
        int from,to;
        cin >> from >> to;
        
        if (v[from-1].count(to)){
            v[from-1].erase(to);
        } else {
            v[to-1].insert(from);
        }
    }
    int size = 0;
    int celebId = 0;
    for (int i = 0;i<n;i++){
        if (v[i].size() > size){
            size = v[i].size();
            celebId = i;
        }
    }
    cout << celebId+1 << " " << size;
}
