//
// Created by Jihad on 7/22/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

int findSmallest(vector<int> list) {
    // Your Code is Here ... Hope you Enjoy
//    int n = list.size();
//    int small = INT32_MAX;
//    for (int i = 0; i < n; i++) {
//        if (small > list.at(i)){
//            small = list.at(i);
//        }
//    }
//    return small;
    return *min_element(list.begin(), list.end());
}

void solve() {
    cout << findSmallest({3, 5, 2});
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