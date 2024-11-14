#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Size"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int small = a[0] ,secsmall = a[1];
    for(int i=0;i<n;i++){
        if(a[i]<small){
            secsmall = small;
            small = a[i];
        }
        else if(a[i]<secsmall && a[i]>small){
            secsmall = a[i];
        }
    }
    cout<<"small: "<<small<<endl;
    cout<<"secsmall: "<<secsmall<<endl;
    return 0;
}