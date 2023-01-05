#include <iostream>
#include <vector>

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

#define ll long long

#define TEST_MOD

using namespace std;

int solver(vector<ll> perm) {
    int ret_val = 0;
    cout << perm[0];
    return ret_val;
}

int main() {
    fast int t;
#ifdef TEST_MOD
    t = 1;
#else
    cin >> t;
#endif
    while (t--) {
        int len;
#ifdef TEST_MOD
        len = 2;
        vector<ll> perm = {4, 0, 3, 2, 1};
#else
        cin >> len;
        vector<ll> perm;
        for (int i = 0; i < len; i++) {
            ll inp;
            cin >> inp;
            perm.push_back(inp);
        }
#endif
        cout << solver(perm) << "\n";
    }
}
