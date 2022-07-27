//
// Created by Jihad on 7/27/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

double calcAverage(const vector<int> &values) {
    // your code
    int sum = 0;
    for (auto x: values) {
        sum += x;
    }
    return double(sum) / values.size();
}

void solve() {
    cout << calcAverage({2, 5});
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