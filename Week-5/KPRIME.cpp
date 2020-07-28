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

int arr[ArrayMaxLen];

void factor(){
    for(int i=0;i<ArrayMaxLen;i++){
        arr[i]=0;
    }
    for(int i=2;i<ArrayMaxLen;i++){
        if(arr[i]==0){
            arr[i]=1;
            for(int j=i+i;j<ArrayMaxLen;j+=i){
                
                    arr[j]+=1;
                // }
            }
        }
    }
}


int main(){

    // #ifndef ONLINE_JUDGE
    // // for getting input from input.txt
    // freopen("input.txt", "r", stdin);
    // // for writing output to output.txt
    // freopen("output.txt", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t=1;
    cin>>t;
    factor();
    while(t--){
        solve();
    }
    return 0;
}

void solve(){
    int a,b,k;
    cin>>a>>b>>k;
    int oc=0;
    for(int i=a;i<=b;i++){
        if(arr[i]==k){
            oc+=1;
        }
    }
    cout<<oc<<"\n";
}
