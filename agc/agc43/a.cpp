#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> s(H);
    rep(i, 0, H){
        cin >> s[i];
    }
    cout << s[0][0] << endl;
}