#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        cout<<gcd(a,b)<<"\n";
    }
    return 0;
}
