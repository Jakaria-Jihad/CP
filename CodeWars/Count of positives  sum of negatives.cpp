//
// Created by Jihad on 7/25/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

vector<int> countPositivesSumNegatives(vector<int> input) {
    // go for it!
    int count = 0, sum = 0;
    for (auto x: input) {
        if (x > 0) {
            count++;
        } else if (x < 0) {
            sum += x;
        } else {
            continue;
        }
    }
    vector<int> bal;
    if (!input.empty()) {
        bal.push_back(count);
        bal.push_back(sum);
        return bal;
    } else {
        return bal;
    }
}

void solve() {
    vector<int> result = countPositivesSumNegatives({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15});
    for (auto a: result) {
        cout << a << " ";
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