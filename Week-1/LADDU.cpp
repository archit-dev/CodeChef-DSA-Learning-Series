#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int activities,laddu=0,rank,bugSeverity;
        string origin,activity;
        cin>>activities>>origin;
        while(activities--){
            cin>>activity;
            if(activity=="CONTEST_WON"){
                cin>>rank;
                laddu+=300 + max((20-rank),0);
            }
            else if(activity=="TOP_CONTRIBUTOR"){
                laddu+=300;
            }
            else if(activity=="BUG_FOUND"){
                cin>>bugSeverity;
                laddu+=bugSeverity;
            }
            else{
                laddu+=50;
            }
        }
        if(origin=="INDIAN"){
            cout<<laddu/200<<"\n";
        }
        else{
            cout<<laddu/400<<"\n";
        }
    }
    return 0;
}