#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x,ans=0;
        cin>>n>>x;
        ans=x;
        for(long long i=1;i<n;i++){
            long long y;
            cin>>y;
            x=min(y,x);
            ans+=x;
        }
        std::cout << ans << std::endl;
    }
    return 0;
}
