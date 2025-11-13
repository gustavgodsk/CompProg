#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> mySet{1,3,5,4,7,7};
    cout << mySet.size() << "\n\n"; //5

    mySet.insert(2);
    mySet.insert(5);
    cout << mySet.size() << "\n\n"; //6

    mySet.erase(2);
    cout << mySet.size() << "\n\n"; //5

    set<int> keys;
    keys.insert(1);
    keys.insert(8);
    for (int key : keys){
        if (mySet.count(key)){
            cout << "Set does contain " << key << "\n\n"; //1
        }
        else {
            cout <<"Set doesn't contain " << key << "\n\n"; //8
        }
    }

    auto one = mySet.lower_bound(100);
    cout << (one == mySet.end()) << "\n";
    
    string_view myWord = "element";
    set<char> myChars(myWord.begin(), myWord.end());
    cout << "There are " << myChars.size() << " unique characters in " << quoted(myWord) << ":\n";

}
