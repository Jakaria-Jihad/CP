#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
const int N = 1e7;
vector<bool> isPrime(N + 1, true);
vector<int> primes;

void sieve() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= N; i++) {
        if (isPrime[i] == true) {
            for (int j = i * i; j <= N; j += i) {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 0; i <= N; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
}

void solve() {

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