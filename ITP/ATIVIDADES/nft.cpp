#include <bits/stdc++.h>
using namespace std;

int main() {
    int L, A;
    cin >> L; 
    for (int i = 0; i < L; i++) {
        cin >> A;
        for (int j = 0; j < A; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
