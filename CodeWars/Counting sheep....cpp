//
// Created by Jihad on 7/22/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

int count_sheep(vector<bool> arr) {
    int count = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr.at(i)) {
            count++;
        }
    }
    return count;
}

void solve() {
    vector<bool> array1 = {true, true, true, false,
                           true, true, true, true,
                           true, false, true, false,
                           true, false, false, true,
                           true, true, true, true,
                           false, false, true, true};
    cout << count_sheep(array1);
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