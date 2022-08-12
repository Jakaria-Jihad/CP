//
// Created by Jihad on 8/9/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

string reverse_words(string str) {
    int i = str.length() - 1, begin, end = i + 1;
    string res = "";

    while (i >= 0) {
        if (str[i] == ' ') {
            begin = i + 1;
            while (begin != end)
                res += str[begin++];

            res += ' ';
            end = i;
        }

        i--;
    }
    begin = 0;
    while (begin != end)
        res += str[begin++];

    return res;
    /*
     *  another solution -
     *  std::string s;
  std::stringstream ss(str);
  std::string w;
  while (ss >> w) s = w + " " + s;
  s.pop_back();
  return s;
     */
}

void solve() {
    cout << reverse_words("hello world!");
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