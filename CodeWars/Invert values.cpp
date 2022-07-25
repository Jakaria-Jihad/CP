//
// Created by Jihad on 7/26/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

vector<int> invert(vector<int> values) {
    vector<int> inverted;
    for (auto a: values) {
        inverted.push_back(a * (-1));
    }
    return inverted;
}

void solve() {
    vector<int> result = invert({1, 2, 3, 4, 5});
    for (auto x: result) {
        cout << x << " ";
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