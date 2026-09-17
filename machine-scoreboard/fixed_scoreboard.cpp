#include<iostream>
#include<climits>
using namespace std;
int main(){
    string name;
    int total_score=0;
    int highest = INT_MIN;
    int lowest = INT_MAX;
    cin>> name;
    int scores[5];
    for(int i=0;i<5;i++){
        cin>>scores[i];
    }
    cout<<"Player name: "<<name<<endl;
    cout<<"Scores: "<<endl;
    for(int j=0;j<5;j++){
        cout<<scores[j]<<" ";
        total_score+=scores[j];
        if(scores[j]>highest){
            highest = scores[j];
        }
        if(scores[j]<lowest){
            lowest=scores[j];
        }
    }
    cout<<endl;
    cout<<"Total: "<<total_score<<endl;
    cout<<"Average: "<<total_score/5<<endl;
    cout<<"Highest: "<<highest<<endl;
    cout<<"Lowest: "<<lowest<<endl;
}