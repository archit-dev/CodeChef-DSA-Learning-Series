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
    ll n , z;
    cin>>n>>z;
    priority_queue<ll> q;
    while(n--){
        ll x;
        cin>>x;
        q.push(x);
    }
    ll steps=0;
    while(z>0 && !q.empty()){
        ll sub = q.top();
        q.pop();
        z-=sub;
        sub/=2;
        if(sub!=0){
            q.push(sub);
        }
        steps+=1;
    }
    if(z>0){
        cout<<"Evacuate\n";
    }
    else{
        cout<<steps<<"\n";
    }
}
