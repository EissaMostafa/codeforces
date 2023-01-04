#include <iostream>
#include <vector>

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define ll long long

using namespace std;

int solver(ll a, ll b, ll c){
    int ret_val=0;
    ll e1_d = a-1;
    ll e2_d = (b > c) ? b-1 : 2*c-b-1;
    if(e1_d < e2_d) ret_val = 1;
    else if(e1_d > e2_d) ret_val = 2;
    else ret_val = 3;
    return ret_val;
}

int main(){
    fast
    int t;
    ll a , b, c;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        cout << solver(a, b, c) << "\n";
    }
}
