//
// Created by Jihad on 7/22/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

std::string repeat_str(size_t repeat, const std::string &str) {
    string a;
    if (repeat <= 0) {
        return "";
    } else {
        for (int i = 0; i < repeat; i++) {
            a += str;
        }
        return a;
    }
}

void solve() {
    cout << repeat_str(3, "*");
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