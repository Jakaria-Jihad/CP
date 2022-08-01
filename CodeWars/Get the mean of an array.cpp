//
// Created by Jihad on 8/2/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

int get_average(vector<int> marks) {
    // Your Code is Here ... Enjoy !!!
    int sum = 0;
    for (auto x: marks) {
        sum += x;
    }
    return round(sum / marks.size());
}

void solve() {
    cout << get_average(vector<int>{1, 5, 87, 45, 8, 8});
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