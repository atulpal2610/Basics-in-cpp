#include<iostream>
using namespace std;
int main() {
    #ifndef I_O
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    cin >> a >> b;
    cout << a+b;
    cout << "HelLo World";
    return 0;
}