#include <bits/stdc++.h>
using namespace std;

/*
bool compareMovies(pair<int,int> m1, pair<int,int> m2){
    return (m1.second < m2.second);
}
*/

int main(){
    int n;
    cin >> n;

    vector<pair<int, int>> movies;
    movies.reserve(n);
    for (int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        movies.emplace_back(b,a); //constructs element in-place
    }

    //sort(movies.begin(), movies.end(), compareMovies);
    sort(movies.begin(), movies.end());

    int endTime = 0;
    int count = 0;
    for (auto [b,a] : movies){
        if (a >= endTime){
            count++;
            endTime = b;
        }
    }
    cout << count;
}
