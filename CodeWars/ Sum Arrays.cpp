//
// Created by Jihad on 7/27/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

int sum(vector<int> nums) {
    // your code here
    int sum = 0;
    for (auto x: nums) {
        sum += x;
    }
    return sum;
}

void solve() {
    int result = sum(vector<int>({1, 2, 3, 4}));
    cout << result;

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