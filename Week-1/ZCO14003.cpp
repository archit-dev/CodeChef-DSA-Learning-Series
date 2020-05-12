#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n,maximumProfit=-100000;
    cin>>n;
    vector <long long int> v;
    for(long long int i=0,x;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.rbegin(),v.rend());
    for(long long int i=0;i<n;i++){
        v[i]=v[i]*(i+1);
        maximumProfit=max(v[i],maximumProfit);
    }
    cout<<maximumProfit<<"\n";
    return 0;
}