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
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

void solve(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int> > v1,v2;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.pb(make_pair(x,i));
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        v2.pb(make_pair(x,i));
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int count = 0;
    for(int i=0;i<m;i++){
        if(count>=n+m-1){
            break;
        }
        count+=1;
        cout<<v1[0].second<<" "<<v2[i].second<<"\n";
    }
    for(int i=1;i<n;i++){
        if(count>=n+m-1){
            break;
        }
        count+=1;
        cout<<v1[i].second<<" "<<v2[m-1].second<<"\n";
    }
}
