#include <iostream>
using namespace std;

int sequence(int n){
    if(n == 1) return 1;

    if(n % 2 == 0){
        return sequence(n/2) + 1;
    } else {
        return sequence(3 * n + 1) + 1;
    }
}

int main(){
    int n;
    cin >> n;
    cout << sequence(n) << endl;
}