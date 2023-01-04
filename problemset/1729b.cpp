#include <iostream>
//#include <vector>
#include <string>

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

#define ll long long

using namespace std;

string solver(int len, string code){
    string output = "";
    int ind = len-1;
    while(ind >= 0){
        int char_code;
        if(ind >= 2){
            if(code[ind] == '0'){
                char_code = static_cast<int>(code[ind-2])*10-480 + static_cast<int>(code[ind-1])-48;
                ind-=3;
            }
            else{
                char_code = static_cast<int>(code[ind]) - 48;
                ind-=1;
            
            }
        }
        else{
            char_code = static_cast<int>(code[ind]) - 48;
            --ind;
        }
        output=static_cast<char>(96+char_code)+output;
    }
    return output;
}

int main(){
    fast
    int t;
    cin >> t;
    string code;
    while(t--){
        int len = 0;
        cin >> len;
        cin >> code;
        cout << solver(len, code) << "\n";
    }
}
