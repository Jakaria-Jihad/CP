//
// Created by Jihad on 7/22/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

string no_space(string x) {
    for (int i = 0; i < x.length(); i++) {
        if (x.at(i) == ' ') {
            x.erase(x.begin() + i);
            i--;
        }
    }
    return x;
}

void solve() {
    cout << no_space("8 j 8   mBliB8g  imjB8B8  jl  B");
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