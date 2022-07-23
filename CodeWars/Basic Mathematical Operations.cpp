//
// Created by Jihad on 7/24/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

int basicOp(char op, int val1, int val2) {
    // Your code here
    int result;
    if (op == '+') {
        result = val1 + val2;
    } else if (op == '-') {
        result = val1 - val2;
    } else if (op == '*') {
        result = val1 * val2;
    } else {
        result = val1 / val2;
    }
    return result;
}

void solve() {
    cout << basicOp('+', 5, 4);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ll test = 1;
//cin>>test;
    while (test--) {
        solve();
    }
    return 0;
}