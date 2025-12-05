#include <bits/stdc++.h>
using namespace std;

int n, m;
int directions[4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};
vector<vector<char>> graph;

void dfs (int i, int j){
    graph[i][j] = '#';

    for (auto dir : directions){
        int row = i + dir[0];
        int col = j + dir[1];

        if (row >= 0 && row < n && col >= 0 && col < m){
            char c = graph[row][col];
            if (c == '.'){
                dfs(row,col);
            }
        }
    }
}

int main(){
    cin >> n >> m;
    int count = 0;

    graph.assign(n, vector<char>(m));
    
    //construct graph
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> graph[i][j];
        }
    }

    //traverse graph
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            // if there is a path and it is not already visited (must be new component)
            if (graph[i][j] == '.'){
                count++;
                dfs(i,j);
            }
        }
    }

    cout << count;
}
