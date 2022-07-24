//
// Created by Jihad on 7/25/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

bool isDivisible(int n, int x, int y) {
    // your code here
    int remainder1 = n % x, remainder2 = n % y;
    if (remainder1 == 0 && remainder2 == 0) {
        return true;
    } else {
        return false;
    }
//    here's another solution-
//    return n%x == 0 && n%y == 0;
}

void solve() {
    if (isDivisible(12, 3, 4) == 1) {
        cout << "true";
    } else {
        cout << "false";
    }
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