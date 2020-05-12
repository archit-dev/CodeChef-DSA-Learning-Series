#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int g;
        cin>>g;
        while(g--){
            int n,i,q,ans=0;
            cin>>i>>n>>q;
            if(n%2==0){
                ans=n/2;
            }
            else{
                if(i!=q){
                    ans=n/2 +1;
                }
                else{
                    ans=n/2;
                }
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}