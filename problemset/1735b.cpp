#include <iostream>

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

using namespace std;

int main(){
    fast
    int t;
    int num_pieces;
    int piece;
    cin >> t;
    while(t--){
        int max = 0;
        int total_steps = 0;
        cin >> num_pieces;
        for(int i=0; i<num_pieces; ++i){
            cin >> piece;
            if(i == 0) max = 2*piece - 1;
            if(piece > max) total_steps+=(piece%max == 0) ? (piece/max) - 1 : piece/max;
        }
        cout << total_steps << "\n";
    }
}
