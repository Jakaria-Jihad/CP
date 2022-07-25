//
// Created by Jihad on 7/26/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

string makeUpperCase(const string &input_str) {
    string a = input_str;
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    return a;
}

void solve() {
    cout << makeUpperCase("hello");
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