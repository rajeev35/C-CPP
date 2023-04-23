#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value "<<endl;
    int i=1;
    while(i<=n)
    {
        int j=1;
        int value=i;
        while(j<=i)
        {
          cout<<value;
          value=value+1;
        }
        cout<<endl;
        i=i+1;
        
    }
}