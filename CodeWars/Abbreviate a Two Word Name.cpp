//
// Created by Jihad on 7/25/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

string abbrevName(string name) {
    char a, b;
    a = name.at(0);
    string result;
    for (int i = 0; i <= name[i]; i++) {
        if (name[i] == ' ') {
            b = name[i + 1];
        }
    }
    result.push_back(a);
    result.push_back('.');
    result.push_back(b);

    return result;
}

void solve() {
    cout << abbrevName("patrick feeney");
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