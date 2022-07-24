//
// Created by Jihad on 7/24/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

vector<int> digitize(unsigned long n) {
    string a = to_string(n);
    reverse(a.begin(), a.end());
    vector<int> ar;
    for (int i = 0; i < a.size(); i++) {
        ar.push_back(a.at(i) - '0');
    }
    return ar;

}

void solve() {
    vector<int> arr = digitize(1234);
    for (auto a: arr) {
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