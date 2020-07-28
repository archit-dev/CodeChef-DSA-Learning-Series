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
    vector<ll> v(60);
    v[0]=0;
    v[1]=1;
    ll i=0,j=1;
    for(int i=2;i<61;i++){
        v[i] = (v[i-1]%10 + v[i-2]%10)%10;
    }
    ll n1=n;
    ll count=0;
    while(n1!=1){
        count+=1;
        n1/=2;
    }
    // count= max (count,(ll)0);
    n1 = pow(2,count);
    cout<<v[ n1%60 -1 ]<<"\n";
}
