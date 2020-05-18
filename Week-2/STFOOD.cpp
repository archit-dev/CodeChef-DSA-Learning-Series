#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,p,v,profit=INT_MIN;
        cin>>n;
        while(n--){
            cin>>s>>p>>v;
            profit=max((p/(s+1))*v,profit);
        }
        cout<<profit<<"\n";
    }
    return 0;
}