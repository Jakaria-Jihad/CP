//
// Created by Jihad on 8/2/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

int simpleMultiplication(int a) {
    //Your code
    if (a % 2 == 0) {
        return a * 8;
    } else {
        return a * 9;
    }
}

void solve() {
    cout << simpleMultiplication(1);
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