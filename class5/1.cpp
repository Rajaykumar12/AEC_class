/* You are given four integers a,b,c and d. determine if there's a rectangle such that 
the length of it's sides are a,b,c and d (in any order) */


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if((a==c)&&(b==d))
        cout<<"YES"<<endl;
        else if((a==b)&&(c==d))
        cout<<"YES"<<endl;
        else if((a==d)&&(b==c))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}