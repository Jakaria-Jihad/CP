//
// Created by Jihad on 7/24/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

std::string boolean_to_string(bool b) {
    //Your code here
    if (b) {
        return "true";
    } else {
        return "false";
    }
}

void solve() {
    cout << boolean_to_string(false);
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