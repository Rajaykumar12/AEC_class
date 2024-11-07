/* c++ program to enter a number and return number/2 if it is a even a number otherwise 
number*3+1 if it is a even number. Iterate it the number reduces to 1 */
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    while(a!=1)
    {
        if(a%2==0)
        {
            a = a/2;
        }
        else
        {
            a = a*3+1;
        }
        cout<<a<<endl;
    }
    return 0;
}