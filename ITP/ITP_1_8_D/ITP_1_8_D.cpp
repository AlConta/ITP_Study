#include<iostream>
#include<vector>
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define Rep(i, a, b) for(int i = a; i <= b; i++)
#define sz(s) (int)s.size()

int main() {
    string s, p;
    cin >> s >> p;
    int ringSize = sz(s);
    int ansSize = sz(p);
    s += s;
    rep(i, 0, ringSize) {
        if (s.substr(i, ansSize) == p) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}