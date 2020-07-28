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
    ll n , m , x , y;
    cin>>n>>m>>x>>y;
    if(((n-1)%x ==0) && ((m-1)%y ==0) && n>0 && m>0){
        cout<<"Chefirnemo\n";
    }
    else if((n-2)%x==0 && (m-2)%y==0 && n>1 && m>1){
        cout<<"Chefirnemo\n";
    }
    else{
        cout<<"Pofik\n";
    }
}
