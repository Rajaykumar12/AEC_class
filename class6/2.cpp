/*  
Output the doll number which doesnt have a pair
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count,freq;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(a[i]==a[j])
                count++;
            }
            if(count!=2)
            freq = a[i];
        }
        cout<<freq<<endl;
    }
    return 0;
}