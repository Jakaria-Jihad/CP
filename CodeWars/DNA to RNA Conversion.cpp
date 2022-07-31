//
// Created by Jihad on 7/31/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

std::string DNAtoRNA(std::string dna) {
    for (int i = 0; i < dna.length(); i++) {
        if (dna[i] == 'T') {
            dna.replace(i, 1, "U");
        }
    }
//    std::replace(dna.begin(), dna.end(), 'T', 'U');
    return dna;
}

void solve() {
    cout << DNAtoRNA("UGCAU");
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