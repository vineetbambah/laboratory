#include<bits/stdc++.h>
using namespace std;
struct logLine{
    string date;
    string timestamp;
    string username;
    string action;
};
int main(){
    map<string,int>freq;
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
    for(int i=0;i<logEntries.size();i++){
        freq[logEntries[i].username]++;
    }

    cout<<"Total number of events: "<<logEntries.size()<<endl;
    cout<<"Number of unique users: "<<freq.size()<<endl;
    for (const auto& pair : freq) {
        cout << pair.first<< " is " << pair.second <<"\n";
    }
}
