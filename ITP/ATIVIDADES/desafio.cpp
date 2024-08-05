#include <iostream>
using namespace std;

int main() {
    int N, inimigo, amigo, difer, igual;

    cin >> N;
    cin >> inimigo;
    cin >> amigo;

    difer = inimigo % amigo;

    cout << difer << endl;

    return 0;
}