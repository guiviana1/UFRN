#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, resto;
    cin >> num;
    resto = (num % 10);
    num = (num / 10);
    cout << num << " " << resto << endl;

    return 0;
}