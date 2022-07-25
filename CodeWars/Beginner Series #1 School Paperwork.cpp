//
// Created by Jihad on 7/25/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

int paperwork(int n, int m) {
    if (n <= 0 or m <= 0) {
        return 0;
    } else {
        return n * m;
    }
}

void solve() {
    cout << paperwork(-5, -5);
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