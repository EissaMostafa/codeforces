#include <iostream>
#include <vector>

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

#define ll long long

//#define TEST_MOD

using namespace std;

int solver(int inp){
    int ret_val=-1;
    
    
    return ret_val;
}

int main(){
    fast
    int t;
#ifdef TEST_MOD
    t = 1;
#else
    cin >> t;
#endif
    while(t--){
        int inp;
#ifdef TEST_MOD
        inp = 4;
#else
        cin >> inp;
#endif
        if(inp%2 == 0){
            cout << inp/2 << " 0" << " 0" << "\n";
        } else{
            cout << "-1" << "\n";
        }
        //cout << solver(inp) << "\n";
    }
}
