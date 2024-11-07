/* RCB need Y number of points to qualify to playoffs, it already has x number of points.
SO out of the remaining z number of games will RCB qualify the group stage and play for the playoffs*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(2*z>=y-x || 1*z>=y-x)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}