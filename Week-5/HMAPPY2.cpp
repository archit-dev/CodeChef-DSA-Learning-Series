#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>
#include <cmath>
#include <climits>
#include <queue>
#include <stack>
#include <ctype.h>
#include <set>
#include <unordered_map>
#define ll long long
#define pb push_back
#define ArrayMaxLen 100001
#define vi vector<int>
#define vl vector<long long>
#define MOD 1000000007
#define MAX 10000001

using namespace std;

void solve();
ll gcd(ll a, ll b);
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

void solve(){
    ll n ,a , b, k;
    cin>>n>>a>>b>>k;
    ll g = gcd(a,b);
    ll lcm = (a*b)/g;
    ll res = (n/a) + (n/b) - 2*(n/lcm);
    if(res>=k){
        cout<<"Win\n";
    }
    else{
        cout<<"Lose\n";
    }
}

ll gcd(ll a, ll b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
