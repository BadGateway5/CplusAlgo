#include<bits/stdc++.h>
using namespace std;


bool simpleDigit(int n) {
    int d = 2;
    while (n % d != 0) { d++; }
    return n == d;
}


int main() {
    int n; cin >> n;
    cout << simpleDigit(n) << "\n";
}