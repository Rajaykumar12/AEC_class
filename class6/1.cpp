/*
Now there are n playeers between two persons in  a straight line, with the ith player 
having hright Hi,  he wants to know the minimum number of players who need to get shot 
so that ali is visible in his line of sight
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,t,count=0;
        cin>>n>>t;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]>t)
                count = count + 1;
        }
        cout<<count<<endl;
    }
    return 0;
}