#include<bits/stdc++.h>

using namespace std;

//Macros
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define testcases() long int t;cin>>t;for(int i=0;i<t;i++){solve();}
#define nline "\n"
#define all(x) x.begin(),x.end()
#define maxele(v) *max_element(all(v))
#define minele(v) *min_element(all(v))
#define sum(v) accumulate(all(v),0)


#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" ";_print(x);cerr<<nline;
#else
#define debug(x)
#endif

void _print(long int t){cerr<<t;}
void _print(int t){cerr<<t;}
void _print(string t){cerr<<t;}
void _print(char t){cerr<<t;}
void _print(double t){cerr<<t;}
void _print(long long t){cerr<<t;}

//Debugging Purpose
template<class T,class V> void _print(pair<T,V> p);
template<class T> void _print(vector<T> v);
template<class T,class V> void _print(map<T,V> mp);
template<class T,class V> void _print(unordered_map<T,V> ump);

template<class T,class V> void _print(pair<T,V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template<class T> void _print(vector<T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template<class T,class V> void _print(map<T,V> mp)  {cerr << "[ "; for (auto i : mp) {_print(i); cerr << " ";} cerr << "]";}
template<class T,class V> void _print(unordered_map<T,V> ump)  {cerr << "[ "; for (auto i : ump) {_print(i); cerr << " ";} cerr << "]";}

//Math Functions to be added
void solve(){

}   

int main(){
    fastio();
    //testcases();
    // solve();
    return 0;
}