#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

#define ll long long

// #define TEST_MOD

using namespace std;

int solver(int n, int k, vector<int> perm) {
    int num_ops = 0;
    auto one_idx = find(perm.begin(), perm.end(), 1) - perm.begin();
    int sorted_num = 1;
    int idx = one_idx;
    for (int i = one_idx + 1; i < n; i++) {
        if (perm[i] == perm[idx] + 1) {
            idx = i;
            sorted_num++;
        }
    }
    num_ops = ceil(float(n - sorted_num) / k);
    return num_ops;
}

int main() {
    fast int t;
#ifdef TEST_MOD
    t = 1;
#else
    cin >> t;
#endif
    while (t--) {
        int n, k;
#ifdef TEST_MOD
        n = 8;
        k = 4;
        vector<int> perm = {8, 1, 3, 7, 2, 4, 5, 6};
#else
        vector<int> perm;
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            int inp;
            cin >> inp;
            perm.push_back(inp);
        }
#endif

        cout << solver(n, k, perm) << "\n";
    }
}
