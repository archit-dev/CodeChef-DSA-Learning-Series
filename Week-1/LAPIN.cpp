#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int mid=s.size()/2;
        bool odd=true;
        if(s.size()%2==0){
            odd=false;
        }
        int characters1[26]={0},characters2[26]={0};
        for(int i=0;i<mid;i++){
            characters1[s[i]-'a']+=1;
        }
        if(odd){
            mid+=1;
        }
        for(int i=mid;i<s.size();i++){
            characters2[s[i]-'a']+=1;
        }
        bool isLapin=true;
        for (int i=0;i<26;i++){
            if(characters2[i]!=characters1[i]){
                isLapin=false;
                break;
            }
        }
        if(isLapin){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
