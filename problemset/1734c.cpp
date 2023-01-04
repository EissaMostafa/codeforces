#include <iostream>
#include <string>

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define ll long long int

using namespace std;

ll calc_cost(string seq, int n){
    ll cost = 0;
    for(int i=1;i<n+1;i++){
        if(seq[i-1]=='0' or seq[i-1]=='2'){
            int ind=1;
            for(int j=i;j<n+1;j=i*(++ind)){
                if(seq[j-1] == '0'){
                    cost+=(i);
                    seq[j-1] = '2';
                }
                else if (seq[j-1] == '1'){
                    seq[i-1]='1';
                    break;
                }
            }
        }
    }
    return cost;
}

int main(){
    fast
    int test_num=0;
    int set_size=0;
    string set_str;
    cin >> test_num;
    for(int i=0;i<test_num;i++){
            cin >> set_size;
            cin >> set_str;
            cout << calc_cost(set_str, set_size) << '\n';
    }
    return 0;
}
