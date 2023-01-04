#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define ll long long

#include <chrono>

using namespace std;

string s;

bool cmp_des(int e1, int e2) { return s[e1-1] > s[e2-1]; }
bool cmp_asc(int e1, int e2) { return s[e1-1] < s[e2-1]; }

void solver(vector<int>& indices){
    int s_len = s.size();
    bool is_desc = s[0] > s[s_len-1] ? true : false;
    int s_h_int = is_desc ? s[0] : s[s_len-1];
    int s_l_int = is_desc ? s[s_len-1] : s[0];
    for(int i=1;i<s_len-1;i++)
        if((int)s[i] <= s_h_int && (int)s[i] >= s_l_int)
            indices.push_back(i+1);
    if(s_len>3) {
        if(is_desc)
            sort(indices.begin(), indices.end(), cmp_des);
        else
            sort(indices.begin(), indices.end(), cmp_asc);
    }
}

int main(){
    fast
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        vector<int> indices;
        solver(indices);
        cout << abs((int)s[0] - (int)s.back()) << " " << indices.size()+2 << "\n";
        cout << "1 "; //First step always first element
        for(auto it = indices.begin(); it != indices.end(); ++it) {
            std::cout << *it << " ";
        }
        cout << s.size() << "\n"; //Last step always last element
    }
}
