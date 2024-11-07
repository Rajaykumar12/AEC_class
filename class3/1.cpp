/* given the number of 10 penalty shootouts, team1 takes 1st chance and team2 takes secind chance 
given the array,1 specifies goal and 0 specfies miss. given the array output the final results
if team1 wins output 1 and if team2 wins output 2 if its a tie then 0*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10];
    int t;
    cin>>t;
    while(t--){    
    int team1=0,team2=0;
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    for(int i=0;i<10;i++){
        if(i%2==0){
            if(a[i]==1)
            team1++;
        }
        else if(i%2!=0){
            if(a[i]==1)
            team2++;
        }
    }
    if(team1>team2)
    cout<<"1"<<endl;
    else if(team1<team2)
    cout<<"2"<<endl;
    else if(team1==team2)
    cout<<"0"<<endl;
    }
}
