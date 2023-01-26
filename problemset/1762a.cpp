#include <iostream>
#include <vector>

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

#define ll long long

using namespace std;

int calc_min_ops(vector<int> input, int size) {
    int min_ops = -1;
    for (int i : input) {
        int num_ops = 0;
        int inp_element = i;
        while (1) {
            if (((inp_element % 2) == 0 && (inp_element / 2) % 2 != 0) || ((inp_element % 2) != 0 && (inp_element / 2) % 2 == 0)) {
                num_ops++;
                break;
            } else {
                num_ops++;
                inp_element = inp_element / 2;
            }
        }
        if (num_ops < min_ops || min_ops == -1)
            min_ops = num_ops;
    }
    return min_ops;
}

int main() {
    fast int t;
    cin >> t;
    while (t--) {
        int n = 0, sum = 0, num_ops = 0;
        vector<int> inp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            sum += temp;
            inp.push_back(temp);
        }
        if (sum % 2 != 0) {
            num_ops = calc_min_ops(inp, n);
        }
        cout << num_ops << "\n";
    }
}
