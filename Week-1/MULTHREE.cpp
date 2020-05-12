#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int k,d0,d1,d2,d3,d4,d5,d6,sum,num;
        cin>>k>>d0>>d1;
        sum=(d0+d1);
        d2=sum%10;
        sum+=d2;
        d3=sum%10;
        sum+=d3;
        d4=sum%10;
        sum+=d4;
        d5=sum%10;
        sum+=d5;
        d6=sum%10;
        sum+=d6;
        long long int x1=d3,x2=d3+d4,x3=d3+d4+d5,x4=d3+d4+d5+d6;
        if(k==2){
            num=d0+d1;
        }
        else{
            num=d0+d1+d2+ x4*((k-3)/4);
            if((k-3)%4==1){
                num+=x1;
            }
            else if((k-3)%4==2){
                num+=x2;
            }
            else if((k-3)%4==3){
                num+=x3;
            }
        }
        if(num%3==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
    }
    return 0;
}