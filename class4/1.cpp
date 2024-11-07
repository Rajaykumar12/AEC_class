/* TO check whether the rooks in the chess board attack each other or not give the chess board is of the size
8*8. the input is in the format of (x1,y1) and (x2,y2). Check whether the rooks attack each other or not*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2 && y1==y2)
    cout<<"NO"<<endl;
    else if(x1==x2 || y1==y2)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }
    return 0;
}