/* To check whether the word is easy to pronounce or not. 
If the word has 4 consecutive consonants then it is difficult 
to pronounce otherwise it is pronounceable */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count;
        string str;
        cin>>n;
        cin>>str;
        for(int i=0;i<n;i++){
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            {
                count=0;
            }
            else{
                count++;
                if(count==4)
                    break;
            }
        }
        if(count==4)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}