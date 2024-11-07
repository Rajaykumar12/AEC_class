/* Vasya likes the number 239. he considers a number pretty if the last digit is 2,3 or 9
. between the inputs the the range and determine the number if pretty numbers */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int count = 0,l,r;
        cin>>l>>r;
        for(int i=l;i<=r;i++){
            if(i%10==2 || i%10==3 || i%10==9){
                cout<<i<<" ";
                count++;
            }
        }
        cout<<endl<<count<<endl;
    }
    return 0;
}