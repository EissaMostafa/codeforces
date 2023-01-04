#include <iostream>
#include <vector>

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define ll long long

using namespace std;

int get_thickness(ll sum, int start, vector<ll> seq){
    ll rss=0;
    int th = 0;
    int th_ind = start;
    for(int i=start; i<seq.size(); ++i){
        rss+=seq[i];
        //cout << "sum: " << sum << ", rss: " << rss << ", i: " << i << ", th_ind: " << th_ind << "th : " << th << endl;
        if(rss > sum) break;
        if(rss == sum){
            rss = 0;
            if(i-th_ind+1 > th) th = i-th_ind+1;
            th_ind = i+1;
        }
    }
    if(rss > 0) th = 0;
    //cout << "th: " << th << endl;
    //cout << "****************" << endl;
    return th;
}

int solver(vector<ll> seq){
    int th = 0;
    int min_th = seq.size();
    ll fss=0;
    for(int i=0;i<seq.size()-1;++i){
        fss+=seq[i];
        th = get_thickness(fss, i+1, seq);
        if(th!=0){
            th = (i+1 > th) ? i+1 : th;
            min_th = (th < min_th) ? th : min_th;
        }
    }
    return min_th;
}

int main(){
    fast
    int t;
    ll inp;
    cin >> t;
    //t = 1;
    while(t--){
        int len;
        cin >> len;
        vector<ll> seq;
        for(int i=0; i<len; ++i){
            cin >> inp;
            seq.push_back(inp);
        }
        //int len = 6;
        //vector<ll> seq = {1, 2, 1, 1, 1 ,1 ,1,1 ,2 ,1 };
        //vector<ll> seq = {2, 4, 4, 1, 8, 3};
        cout << solver(seq) << "\n";
    }
}
