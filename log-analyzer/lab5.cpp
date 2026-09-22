#include<bits/stdc++.h>
using namespace std;
struct logLine{
    string date;
    string timestamp;
    string username;
    string action;
};
int main(){
    vector<logLine> logEntries;
    logLine tempInp;
    do{
        cin>>tempInp.date;
        if(tempInp.date!="END"){
            cin>>tempInp.timestamp>>tempInp.username>>tempInp.action;
            logEntries.push_back(tempInp);
        }
    }while(tempInp.date!="END");
    for (auto log : logEntries) {
        cout << log.date << " "
             << log.timestamp << " "
             << log.username << " "
             << log.action << '\n';
    }
}
