#include <iostream>
#include <string>

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

#define ll long long

// #define TEST_MOD

using namespace std;

string solver(string inp) {
    string ret_val = "YES";
    string val_char = "Yes";
    for (int i = 0; i < inp.size(); i++) {
        if (val_char.find(inp[i]) != string::npos) {
            if (i < inp.size() - 1) {
                if ((inp[i] == 'Y' && inp[i + 1] != 'e') || (inp[i] == 'e' && inp[i + 1] != 's') || (inp[i] == 's' && inp[i + 1] != 'Y')) {
                    ret_val = "NO";
                    break;
                }
            }
        } else {
            ret_val = "NO";
            break;
        }
    }
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
        string inp;
#ifdef TEST_MOD
        inp = "esYes";
#else
        cin >> inp;
#endif
        cout << solver(inp) << "\n";
    }
}
