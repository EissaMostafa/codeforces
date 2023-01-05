#include <iostream>
#include <vector>

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

#define ll long long

// #define TEST_MOD

using namespace std;

int main() {
    fast int t;
#ifdef TEST_MOD
    t = 1;
#else
    cin >> t;
#endif
    while (t--) {
        int n, m;
#ifdef TEST_MOD
        n = 6;
        m = 6;
#else
        cin >> n >> m;
#endif
        // cout << n << endl;
        // cout << m << endl;
        string s1 = "1 0";
        string s2 = "0 1";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m / 2; j++) {
                if (j % 2 == 0)
                    cout << s1;
                else
                    cout << s2;
                if (j != (m / 2 - 1))
                    cout << " ";
            }
            cout << "\n";
            if (i % 2 == 0) {
                string tmp = s1;
                s1 = s2;
                s2 = tmp;
            }
        }
    }
}
