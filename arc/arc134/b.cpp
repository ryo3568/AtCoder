#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

int main() {
    int N;
    string s;
    cin >> N >> s;
    vector<int> count(s.length());
    int cmin = 0;
    rep(i, 1, s.length()){
        count[i] = cmin;
        if(s[i] <= s[cmin]){
            cmin = i;
        }
    }
    rep(i, 0, N){
        if(s[i] > s[cmin]){
            swap(s[i], s[cmin]);
            cmin = count[cmin];
        }
        if(i >= cmin) break;
    }
    cout << s << endl;
}