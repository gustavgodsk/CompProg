#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(1); //insert at end
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop(); // remove first el
    
    cout << "queue contents: " << "\n";
    for (int i : q){
        cout << i << "\n";
    }

    cout << "front: " << q.front() << "\n";
    cout << "back: " << q.back() << "\n";
    cout << "empty: " << q.empty() << "\n";
    cout << "size: " << q.size() << "\n";
}
