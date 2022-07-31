//
// Created by Jihad on 7/31/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

vector<int> reverseSeq(int n) {
    //your code here
    vector<int> reversed;
    while (n != 0) {
        reversed.push_back(n);
        n--;
    }
    return reversed;
}

void solve() {
    vector<int> result = reverseSeq(5);
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