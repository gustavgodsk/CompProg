#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int prev;
    int sum;
    int maxSum; 
    int gap = 0;

    for (int i = 0; i < n; i++){
        int num;
        cin >> num;

        if (!prev) {
            sum = num;
            maxSum = sum;
        }
        else if ((num >= 0 && prev >= 0) || (num < 0 && prev < 0)){
            sum += num;
            maxSum = max({maxSum, sum});
        }
        else if (num >= 0){
            gap = sum;
            sum = num;
        }
        else {
            sum = num;
            maxSum = max({maxSum, sum});
        }
        prev = num;
    }
    
    cout << maxSum;
}
