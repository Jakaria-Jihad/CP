//
// Created by Jihad on 7/27/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

bool hero(int bullets, int dragons) {
    if (dragons * 2 == bullets) {
        return true;
    } else {
        return false;
    }
//    another solve
//    return dragons*2 <= bullet;
}

void solve() {
    if (hero(10, 5) == 1) {
        cout << "true";
    } else {
        cout << "false";
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