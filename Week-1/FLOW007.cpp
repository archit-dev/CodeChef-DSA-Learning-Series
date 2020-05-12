#include <bits/stdc++.h>

using namespace std;

long long int reverse(long long int x){
    long long int y=0;
    while(x>0){
        int rem=x%10;
        y=y*10+rem;
        x/=10;
    }
    return y;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int x;
        cin>>x;
        cout<<reverse(x)<<"\n";
    }
    return 0;
}
