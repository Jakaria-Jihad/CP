//
// Created by Jihad on 7/31/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

bool zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left) {
    if (mpg * fuel_left >= distance_to_pump) {
        return true;
    } else {
        return false;
    }
//    return (mpg*fuel_left >= distance_to_pump);
}

void solve() {
    if (zero_fuel(100, 50, 1)) {
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