#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<" Enter the value of n "<<endl;
    cin>>n;
    int i;
    for(i=0;i<=30;i++)
    {
        int ans=pow(2,i);
        if(ans==n)
        {
            return true;
        }
    }
    return false;
    
}