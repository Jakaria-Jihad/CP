//
// Created by Jihad on 7/22/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

int summation(int num) {
    //Code Here
    int sum = 0;
    while (num != 0) {
        sum += num;
        num--;
    }
    return sum;
}

void solve() {
    cout << summation(8);
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