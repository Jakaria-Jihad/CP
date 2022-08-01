//
// Created by Jihad on 8/2/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

bool betterThanAverage(vector<int> classPoints, int yourPoints) {
    // your code here
    double avg = 0;
    int sum = 0;
    for (auto x: classPoints) {
        sum += x;
    }
    avg = sum / classPoints.size();
    if (yourPoints > avg) {
        return true;
    } else {
        return false;
    }
}

void solve() {
    if (betterThanAverage(vector{2, 3}, 5)) {
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