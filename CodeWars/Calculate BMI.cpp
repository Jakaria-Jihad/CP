//
// Created by Jihad on 7/27/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

string bmi(double w, double h) {
    float result = w / (h * h);
    if (result <= 18.5) {
        return "Underweight";
    } else if (result <= 25.0) {
        return "Normal";
    } else if (result <= 30.0) {
        return "Overweight";
    } else if (result > 30) {
        return "Obese";
    } else {
        return 0;
    }
}

void solve() {
    cout << bmi(86.7, 1.7);
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