#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    bool sieve[201];
    for(int i=0;i<201;i++){
        sieve[i]=true;
    }
    sieve[0]=sieve[1]=false;
    for(int i=2;i*i<=201;i++){
        if(sieve[i]){
            for(int j=i*i;j<201;j+=i){
                sieve[j]=false;
            }
        }
    }
    vector<int> b;
    for(int i=0;i<201;i++){
        if(sieve[i]){
            b.push_back(i);
        }
    }
    set<int> semP;
    for(int i=0;i<b.size();i++){
        for(int j=0;j<b.size();j++){
            if(i==j){
                continue;
            }
            if(b[i]*b[j]>200){
                break;
            }
            semP.insert(b[i]*b[j]);
            // if(b[i]*b[j]>200){
            //     break;
            // }
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        auto it = semP.begin();
        auto it2 = semP.begin();
        bool ans=false;
        while(it2!=semP.end()){
            if(semP.find(n-*it)!=semP.end()){
                ans=true;
                break;
            }
            it++;it2++;
        }
        if(ans){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
