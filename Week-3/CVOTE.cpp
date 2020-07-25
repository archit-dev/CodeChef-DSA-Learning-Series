#include <bits/stdc++.h>
using namespace std;

string search(map<string,string> & m,string s){
    auto it = m.find(s);
    return it->second;
}

int main(){
    int num_chef,num_votes;
    cin>>num_chef>>num_votes;
    string name,country;
    map<string,string> player_country;
    map<string,int> player_score;
    map<string,int> country_score;
    for(int i=0;i<num_chef;i++){
        cin>>name>>country;
        player_country.insert(make_pair(name,country));
    }
    for(int i=0;i<num_votes;i++){
        cin>>name;
        if(player_score.find(name)!=player_score.end()){
            player_score[name]+=1;
        }
        else{
            player_score.insert(make_pair(name,0));
        }
        string contri = search(player_country,name);
        if(country_score.find(contri)!=country_score.end()){
            country_score[contri]+=1;
        }
        else{
            country_score.insert(make_pair(contri,0));
        }
    }
    int playmax=INT_MIN,cmax=INT_MIN;
    set<string>chef,cntr;
    for(auto i: player_score){
        playmax=max(playmax,i.second);
    }
    for(auto i: country_score){
        cmax=max(cmax,i.second);
    }
    for(auto i:player_score){
        if(i.second==playmax){
            chef.insert(i.first);
        }
    }
    for(auto i:country_score){
        if(i.second==cmax){
            cntr.insert(i.first);
        }
    }
    auto it1=chef.begin(),it2=cntr.begin();
    cout<<*it2<<"\n"<<*it1<<"\n";
    return 0;
}
