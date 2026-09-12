#include<iostream>
#include<climits>
using namespace std;
int main(){
int highest=INT_MIN;
int lowest=INT_MAX;
int i=0;
int score;
int total=0;
do{
cin>>score;
cout<<score<<endl;
if(score!=-1){
i++;
total+=score;
if(score>highest){
highest=score;
}
if(score<lowest){
lowest=score;
}
}
}while(score!=-1);
cout<<"Total: "<<total<<endl;
cout<<"Average: "<<total/i<<endl;
cout<<"Highest: "<<highest<<endl;
cout<<"Lowest: "<<lowest<<endl;
}
