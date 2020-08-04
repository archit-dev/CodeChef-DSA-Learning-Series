#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        priority_queue< pair < int, pair<int,int> > > q;
        vector<int> v(x+1,0);
        int filler=1;
        int low=1,high=x;
        int mid=(low+high)/2;
        v[mid]=filler;
        filler+=1;
        q.push(make_pair((mid-1)-low,make_pair(-1*low,-1*(mid-1))));
        q.push(make_pair(high-(mid+1),make_pair(-1*(mid+1),-1*high)));
        while(filler!=x+1){
            auto it = q.top();
            low = -it.second.first;
            high = -it.second.second;
            mid= (low+high)/2;
            v[mid]=filler;
            q.pop();
            if((mid-1) - low >=0){
                // q.push(make_pair((mid-1) - -1*(it.second.first),make_pair(it.second.first,-1*(mid-1))));
                q.push({(mid-1)-low,{-low,-(mid-1)}});
            }
            if(high-(mid+1)>=0){
                // q.push(make_pair(-1*it.second.second-(mid+1),make_pair(1*(mid-1),it.second.second)));
                q.push({high-(mid+1),{-(mid+1),-high}});
            }
            filler+=1;
        }
        for(int i=1;i<=x;i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
