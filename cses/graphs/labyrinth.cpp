#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<char>> graph(n, vector<char>(m, '#'));
    vector<vector<pair<int,int>>> parents(n, vector<pair<int,int>>(m, {-1,-1}));
    pair<int,int> source;
    pair<int,int> dest;

    //build graph
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            char c;
            cin >> c;
            graph[i][j] = c;
            if (c == 'A'){
                source = {i,j};
            }

            if (c == 'B'){
                dest = {i,j};
            }
        }
    }
    //initialize u.parent = NIL
    //find A index (i,j)

    //traverse graph (BFS)
    queue<pair<int,int>> q;
    q.push(source);

    string solution = "NO";

    int directions[4][2] = {{0,1}, {0,-1},{1,0},{-1,0}};

    while (!q.empty()){
        pair<int,int> u = q.front();
        q.pop();

        int i = u.first;
        int j = u.second;


        for (auto dir : directions){
            int row = i + dir[0];
            int col = j + dir[1];

            if (row >= 0 && row < n && col >= 0 && col < m){
                char c = graph[row][col];
                if (c == '#' || c == 'A') {
                    continue;
                }

                parents[row][col] = {i, j};
                graph[row][col] = '#';

                if (c == 'B'){
                    solution = "YES";
                    break;
                }
                q.push({row, col});
            }
        }



    }
    if (solution == "NO"){
        cout << solution;
        return 0;
    }

    int steps = 0;
    stack<char> path;
    while(parents[dest.first][dest.second] != make_pair(-1,-1)){
        steps = steps + 1;
        int i = dest.first;
        int j = dest.second;
        pair<int,int> parent = parents[i][j];

        char d;
        // move down
        if (i < parent.first){
            d = 'U';
        }
        //move up
        if (i > parent.first){
            d = 'D';
        }
        //move left
        if (j < parent.second){
            d = 'L';
        }
        //move right
        if (j > parent.second){
            d = 'R';
        }

        path.push(d);
        dest = parent;
    }

    cout << solution << "\n";
    cout << steps << "\n";

    while (!path.empty()){
        cout << path.top();
        path.pop();
    }      

    //update u.parent
    //if u == 'A', break

    //traverse u.parent until parent = NIL
    //reverse the order and print
}
