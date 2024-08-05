#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int fat = 1;
    cin >> n;
    for (int i = 0; n > i; n--) { 
        fat = fat * n;
    }
    cout << fat << endl;
    return 0;
}