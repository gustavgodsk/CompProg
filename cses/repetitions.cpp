#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int longestSubstr = 1;
    int tempLongest = 1;
    for (int i = 1; i < s.size(); i++){
        if (s[i - 1] != s[i]) tempLongest = 0;
        tempLongest++;
        longestSubstr = max(tempLongest, longestSubstr);
    }
    cout << longestSubstr << endl;
}
