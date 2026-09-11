#include<iostream>
#include<vector>
using namespace std;
int main(){
    string name;
    int total_score=0;
    int temp_input;
    int highest = INT16_MIN;
    int lowest = INT16_MAX; 
    cin>> name;
    vector<int> scores;
    do{
        cin>>temp_input;
        if(temp_input!=-1){
            scores.push_back(temp_input);
        }
    }while(temp_input!=-1);
    if(scores.size()==0){
        cout<<"No numbers inputted"<<endl;    
    }else{
    cout<<"Player name: "<<name<<endl;
    cout<<"Scores: "<<endl;
    for(int j=0;j<scores.size();j++){
        cout<<scores[j]<<"["<<j<<"]";
        total_score+=scores[j];
        if(scores[j]>highest){
            highest = scores[j];
        }
        if(scores[j]<lowest){
            lowest=scores[j];
        }
    }
    cout<<"Total: "<<total_score<<endl;
    cout<<"Average: "<<total_score/scores.size()<<endl;
    cout<<"Highest: "<<highest<<endl;
    cout<<"Lowest: "<<lowest<<endl;}
}