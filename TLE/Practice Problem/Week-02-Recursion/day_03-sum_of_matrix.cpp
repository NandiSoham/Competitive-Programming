#include <iostream>
#include<vector>
using namespace std;

void solve(int row, int col, int maxRow, int maxCol, vector<vector<int>>&a, vector<vector<int>>&b){
    if(row >= maxRow) return;

    if(col == maxCol - 1){
        cout << a[row][col] + b[row][col] << endl;
        solve(row + 1, 0, maxRow, maxCol, a, b);
        return;
    }
    cout << a[row][col] + b[row][col] << " ";
    solve(row, col + 1, maxRow, maxCol, a, b);
}

int main(){
    int r, c;
    cin >> r >> c;
    vector<vector<int>>a(r, vector<int>(c));
    vector<vector<int>>b(r, vector<int>(c));

    for(int  i= 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> a[i][j];
        }
    }

    for(int  i= 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> b[i][j];
        }
    }

    solve(0,0,r,c,a,b);
    
    return 0;
}