#include <iostream>
#include <vector>
 
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
 
using namespace std;
 
int main(){
    fast
    int t;
    cin >> t;
    while(t--){
        int inp;
        cin >> inp;
        if(inp%2 == 0){
            cout << inp/2 << " 0" << " 0" << "\n";
        } else{
            cout << "-1" << "\n";
        }
    }
}