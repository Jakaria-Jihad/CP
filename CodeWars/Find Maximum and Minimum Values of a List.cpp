//
// Created by Jihad on 7/31/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

int min(vector<int> list) {
    return *min_element(list.begin(), list.end());
}

int max(vector<int> list) {
    return *max_element(list.begin(), list.end());;
}

void solve() {
    cout << min({-52, 56, 30, 29, -54, 0, -110});
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