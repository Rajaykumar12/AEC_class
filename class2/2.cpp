/* Thsere is a hidden word S and a guess wowrd T, both oh length 5.IF the aplhabet of both
the indices are same output G or else B */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string S,T;
        cin>>S;
        cin>>T;
        for(int i=0;i<5;i++){
            if(S[i]==T[i])
            cout<<"G";
            else
            cout<<"B";
        }
        cout<<endl;
    }
}