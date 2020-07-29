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
    int n , m , k ;
    cin>>n>>m>>k;
    set<pair<int,int> > s;
    for(int i=0;i<k;i++){
        int x;
        cin>>x;
        int y;
        cin>>y;
        s.insert(make_pair(x,y));
    }
    set<pair<int,int> >::iterator it = s.begin();
    ll total = 0;
    while(it!=s.end()){
        int x = it->first, y = it->second;
        int neighbours = 0;
        if(s.find(make_pair(x,y-1))!=s.end()){
            neighbours+=1;
        }
        if(s.find(make_pair(x,y+1))!=s.end()){
            neighbours+=1;
        }
        if(s.find(make_pair(x-1,y))!=s.end()){
            neighbours+=1;
        }
        if(s.find(make_pair(x+1,y))!=s.end()){
            neighbours+=1;
        }
        total+=4-neighbours;
        it++;
    }
    cout<<total<<"\n";
}
