#include <bits/stdc++.h>
using namespace std;


struct Component {
    Component* parent;
    int size;
};

void make_set(Component *x){
    x->parent = x;
    x->size = 1;
}

Component* find_set(Component *x){
    if (x != x->parent){
        x->parent = find_set(x->parent);
    }
    return x->parent;
}

bool link(Component *x, Component *y){
    if (x == y){return false;}
    if (x->size > y->size){
        y->parent = x;
        x->size += y->size;
    } else {
        x->parent = y;
        y->size += x->size;
    }
    return true;
}

bool unite(Component *a, Component *b){
    return link(find_set(a),find_set(b));
}


int main(){
    int n,m;
    cin >> n >> m;
    //cout << n << m;

    int maxSize = 0;
    vector<Component*> components;
    vector<pair<int, int>> output;
    int compCount = n;

    for (int i = 0; i<n; i++){
        Component* x = new Component();
        make_set(x);
        components.push_back(x);
    }

    for (int i = 0; i < m; i++){
        int a,b;
        cin >> a >> b;
        if (unite(components[a-1],components[b-1])){
            compCount--;
        }

        maxSize = max(maxSize, find_set(components[a-1])->size);

        output.emplace_back(pair(compCount,maxSize));
    }

    for (auto o : output){
        cout << o.first << " " << o.second << "\n";
    }
}
