//
// Created by Jihad on 7/24/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

vector<int> maps(const vector<int> &values) {
    vector<int> val;
    for (int i = 0; i < values.size(); i++) {
        val.push_back(values.at(i) * 2);
    }
    return val;
}

void solve() {
    vector<int> arr = maps({1, 2});
    for (auto a: arr) {
        cout << a << " ";
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