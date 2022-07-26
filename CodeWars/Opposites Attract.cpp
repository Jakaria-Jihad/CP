//
// Created by Jihad on 7/27/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

bool lovefunc(int f1, int f2) {
    if ((f1 % 2 == 0 and f2 % 2 != 0) or (f1 % 2 != 0 and f2 % 2 == 0)) {
        return true;
    } else {
        return false;
    }
    //another solution--
    //return (f1 + f2)%2;
}

void solve() {
    if (lovefunc(2, 2) == 1) {
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