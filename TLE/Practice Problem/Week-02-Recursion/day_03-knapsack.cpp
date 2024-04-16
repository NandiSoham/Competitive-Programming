#include <iostream>
#include<vector>
using namespace std;

int solve(int idx, int leftWeight, int weights[], int values[], int n){{
    //base case
    if(idx == n) return 0;
    if(leftWeight >= weights[idx]){
        return max(solve(idx+1, leftWeight, weights, values, n), solve(idx+1, leftWeight - weights[idx], weights, values, n) + values[idx]);
    } else {
        return solve(idx+1, leftWeight, weights, values, n);
    }
}
    
}

int main(){
    int n, w;
    cin >> n >> w;
    int weights[n], values[n];

    for(int i = 0; i < n; i++){
        cin >> weights[i] >> values[i];
    }

    cout << solve(0, w, weights, values, n) << endl;

    return 0;
}