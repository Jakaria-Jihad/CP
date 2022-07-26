//
// Created by Jihad on 7/26/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

string fakeBin(string str) {
    //your code here
    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= '5') {
            str[i] = '1';
        } else {
            str[i] = '0';
        }
    }
    return str;
}

void solve() {
    cout << fakeBin("45385593107843568");
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