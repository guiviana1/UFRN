#include <iostream>
using namespace std;

int main() {
    float float1, float2, float3;

    cin >> float1;
    cin >> float2;
    cin >> float3;

    cout << float1 + float2 + float3 << endl;
    cout << float1 * float2 * float3 << endl;
    cout << float1 - float2 << endl;
    cout << float1 / float2 << endl;

    float delta = float2 * float2 - 4 * float1 * float3;
    cout << delta << endl;

    return 0;
}