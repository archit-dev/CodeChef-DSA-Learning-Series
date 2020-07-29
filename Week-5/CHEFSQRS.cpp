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
    ll n;
    cin>>n;
    ll ans = LLONG_MAX;
    bool found=false;
    for(ll i = 1; i*i <= n ;i++){
        if(n%i==0){
            ll a = ((n/i)-i)/2;
            ll b = ((n/i)+i)/2;
            if(a*a+n==b*b && a!=0){
                ans = min( ans , a);
                found=true;
            }
        }
    }
    if(!found){
        cout<<"-1\n";
    }
    else{
        cout<<ans*ans<<"\n";
    }
}
