#include<bits/stdc++.h>
using namespace std;
struct logLine{
    string date;
    string timestamp;
    string username;
    string action;
};
int main(){
    int numOfEvents=0;
    vector<string> users;
    bool userFound;
    vector<logLine> logEntries;
    int maxIndex=0;
    logLine tempInp;
    do{
        cin>>tempInp.date;
        if(tempInp.date!="END"){
            cin>>tempInp.timestamp>>tempInp.username>>tempInp.action;
            logEntries.push_back(tempInp);
        }
    }while(tempInp.date!="END");
    for(auto log:logEntries){
        numOfEvents++;
    }
    for(int i=0;i<logEntries.size();i++){
        userFound=false;
        for(int j=0;j<users.size();j++){
            if(users[j]==logEntries[i].username){
                userFound=true;
                break;
            }
        }
       if(!userFound){
           users.push_back(logEntries[i].username);
       }
    }
    vector<int>freq(users.size(),0);
    for(int i=0;i<logEntries.size();i++){
        auto it=find(users.begin(),users.end(),logEntries[i].username);
        auto index=it-users.begin();
        freq[index]++;
    }
    for(int i=1;i<freq.size();i++){
        if(freq[i]>freq[maxIndex]){
            maxIndex=i;
        }
    }
    cout<<"Total number of events: "<<numOfEvents<<endl;
    cout<<"Number of unique users: "<<users.size()<<endl;
    for(int i=0;i<users.size();i++){
        cout<<users[i]<<":"<<freq[i]<<endl;
    }
    cout<<"Most active user: "<<users[maxIndex]<<endl;
}
