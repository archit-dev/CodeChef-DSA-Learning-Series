#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int x,zeros=0;
        cin>>x;
        while(x>0){
            x=x/5;
            zeros+=x;
        }
        cout<<zeros<<"\n";
    }
    return 0;
}
